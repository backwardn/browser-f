#! /bin/bash

# Optional ENVs:
#  CQZ_BUILD_ID - specify special build timestamp or use latest one (depend on channel)
#  CQZ_RELEASE_CHANNEL - specify special build channel (beta by default)
#  CQZ_BUILD_DE_LOCALIZATION - for build DE localization

set -e
set -x

source cliqz_env.sh
cd $SRC_BASE

if $CLOBBER; then
  ./mach clobber
fi

if [ -z "$LANG" ]; then
  LANG='en-US'
fi

# for localization repack
export L10NBASEDIR=../l10n  # --with-l10n-base=...

# check for API key files
if [ ! -f ../mozilla-desktop-geoloc-api.key ]; then
  echo "mozilla-api-key-required" > ../mozilla-desktop-geoloc-api.key
fi
if [ ! -f ../google-desktop-api.key ]; then
  echo "google-api-key-required" > ../google-desktop-api.key
fi

echo '***** Building *****'
./mach build

# https://hg.mozilla.org/mozreview/gecko/rev/011224b42a6659b8374bd64cbab411f4ef6bed92#index_header
# We need to export MOZ_CHROME_MULTILOCALE because that will be used for
# generating multilocale.txt file (./toolkit/mozapps/installer/packager.mk);
# Then ./intl/locale/LocaleService.cpp service takes advantage of that (reads multilocale.txt)
# to define languages put into Services.locale.packagedLocales.
# Once a user set a new locale on Preferences page this will be stored in intl.locale.requested as
# a string value separated by comma.
# For example, "intl.locale.requested" "en-US, de" means that the browser interface is displayed in
# en-US.
# If we change it via about:config for "intl.locale.requested" "de, en-US" and restart the browser
# then UI will be shown in de localization.
export MOZ_CHROME_MULTILOCALE=`ls -1 ../l10n/ | tr "\n" " " | sed 's/ $//g'`
for AB_CD in $MOZ_CHROME_MULTILOCALE; do
  ./mach build chrome-$AB_CD
done

if $CQZ_BUILD_TESTS; then
  echo '***** Building tests *****'
  ./mach build package-tests
fi

echo '***** Packaging *****'
./mach package

if $CQZ_BUILD_SYMBOLS; then
  echo '***** Prepare build symbols *****'
  # Because of Rust problem with dsymutil on Mac (stylo) - only for Windows or mac cross builds
  if [[ $IS_WIN==true || $OSX_CROSS_BUILD==true ]]; then
    if [ "$MOZ_UPDATE_CHANNEL" == "release" ] || [ "$MOZ_UPDATE_CHANNEL" == "beta" ]; then
      ./mach buildsymbols
    fi
  fi
fi

echo '***** Build DE language pack *****'
if [ "$CQZ_BUILD_DE_LOCALIZATION" == "1" ]; then
  ./mach build installers-de
fi

echo '***** Build & package finished successfully. *****'
cd $OLDPWD
