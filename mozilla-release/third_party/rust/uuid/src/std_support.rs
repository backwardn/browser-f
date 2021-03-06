// Copyright 2013-2014 The Rust Project Developers.
// Copyright 2018 The Uuid Project Developers.
//
// See the COPYRIGHT file at the top-level directory of this distribution.
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

use std::error;

impl error::Error for super::BytesError {
    fn description(&self) -> &str {
        "invalid number of uuid bytes"
    }
}

impl error::Error for super::Error {
    fn description(&self) -> &str {
        match *self {
            super::Error::Bytes(ref err) => error::Error::description(err),
            super::Error::Parse(ref err) => error::Error::description(err),
        }
    }
}
