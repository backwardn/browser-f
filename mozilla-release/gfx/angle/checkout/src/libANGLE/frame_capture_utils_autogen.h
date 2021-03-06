// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// frame_capture_utils_autogen.h:
//   ANGLE Frame capture types and helper functions.

#ifndef LIBANGLE_FRAME_CAPTURE_UTILS_AUTOGEN_H_
#define LIBANGLE_FRAME_CAPTURE_UTILS_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace angle
{
enum class ParamType
{
    TAlphaTestFunc,
    TBufferBinding,
    TBufferUsage,
    TClientVertexArrayType,
    TCullFaceMode,
    TDrawElementsType,
    TGLDEBUGPROC,
    TGLDEBUGPROCKHR,
    TGLbitfield,
    TGLboolean,
    TGLbooleanConstPointer,
    TGLbooleanPointer,
    TGLbyte,
    TGLbyteConstPointer,
    TGLcharConstPointer,
    TGLcharConstPointerPointer,
    TGLcharPointer,
    TGLclampx,
    TGLdouble,
    TGLdoubleConstPointer,
    TGLdoublePointer,
    TGLeglImageOES,
    TGLenum,
    TGLenumConstPointer,
    TGLenumPointer,
    TGLfixed,
    TGLfixedConstPointer,
    TGLfixedPointer,
    TGLfloat,
    TGLfloatConstPointer,
    TGLfloatPointer,
    TGLint,
    TGLint64Pointer,
    TGLintConstPointer,
    TGLintPointer,
    TGLintptr,
    TGLintptrConstPointer,
    TGLshort,
    TGLshortConstPointer,
    TGLsizei,
    TGLsizeiConstPointer,
    TGLsizeiPointer,
    TGLsizeiptr,
    TGLsizeiptrConstPointer,
    TGLsync,
    TGLubyte,
    TGLubyteConstPointer,
    TGLubytePointer,
    TGLuint,
    TGLuint64,
    TGLuint64ConstPointer,
    TGLuint64Pointer,
    TGLuintConstPointer,
    TGLuintPointer,
    TGLushort,
    TGLushortConstPointer,
    TGLushortPointer,
    TGLvoidConstPointer,
    TGLvoidConstPointerPointer,
    TGraphicsResetStatus,
    THandleType,
    TLightParameter,
    TLogicalOperation,
    TMaterialParameter,
    TMatrixType,
    TPointParameter,
    TPrimitiveMode,
    TProvokingVertexConvention,
    TQueryType,
    TShaderType,
    TShadingModel,
    TTextureEnvParameter,
    TTextureEnvTarget,
    TTextureTarget,
    TTextureType,
    TVertexAttribType,
    TvoidConstPointer,
    TvoidConstPointerPointer,
    TvoidPointer,
    TvoidPointerPointer,
};

union ParamValue
{
    gl::AlphaTestFunc AlphaTestFuncVal;
    gl::BufferBinding BufferBindingVal;
    gl::BufferUsage BufferUsageVal;
    gl::ClientVertexArrayType ClientVertexArrayTypeVal;
    gl::CullFaceMode CullFaceModeVal;
    gl::DrawElementsType DrawElementsTypeVal;
    GLDEBUGPROC GLDEBUGPROCVal;
    GLDEBUGPROCKHR GLDEBUGPROCKHRVal;
    GLbitfield GLbitfieldVal;
    GLboolean GLbooleanVal;
    const GLboolean *GLbooleanConstPointerVal;
    GLboolean *GLbooleanPointerVal;
    GLbyte GLbyteVal;
    const GLbyte *GLbyteConstPointerVal;
    const GLchar *GLcharConstPointerVal;
    const GLchar *const *GLcharConstPointerPointerVal;
    GLchar *GLcharPointerVal;
    GLclampx GLclampxVal;
    GLdouble GLdoubleVal;
    const GLdouble *GLdoubleConstPointerVal;
    GLdouble *GLdoublePointerVal;
    GLeglImageOES GLeglImageOESVal;
    GLenum GLenumVal;
    const GLenum *GLenumConstPointerVal;
    GLenum *GLenumPointerVal;
    GLfixed GLfixedVal;
    const GLfixed *GLfixedConstPointerVal;
    GLfixed *GLfixedPointerVal;
    GLfloat GLfloatVal;
    const GLfloat *GLfloatConstPointerVal;
    GLfloat *GLfloatPointerVal;
    GLint GLintVal;
    GLint64 *GLint64PointerVal;
    const GLint *GLintConstPointerVal;
    GLint *GLintPointerVal;
    GLintptr GLintptrVal;
    const GLintptr *GLintptrConstPointerVal;
    GLshort GLshortVal;
    const GLshort *GLshortConstPointerVal;
    GLsizei GLsizeiVal;
    const GLsizei *GLsizeiConstPointerVal;
    GLsizei *GLsizeiPointerVal;
    GLsizeiptr GLsizeiptrVal;
    const GLsizeiptr *GLsizeiptrConstPointerVal;
    GLsync GLsyncVal;
    GLubyte GLubyteVal;
    const GLubyte *GLubyteConstPointerVal;
    GLubyte *GLubytePointerVal;
    GLuint GLuintVal;
    GLuint64 GLuint64Val;
    const GLuint64 *GLuint64ConstPointerVal;
    GLuint64 *GLuint64PointerVal;
    const GLuint *GLuintConstPointerVal;
    GLuint *GLuintPointerVal;
    GLushort GLushortVal;
    const GLushort *GLushortConstPointerVal;
    GLushort *GLushortPointerVal;
    const GLvoid *GLvoidConstPointerVal;
    const GLvoid *const *GLvoidConstPointerPointerVal;
    gl::GraphicsResetStatus GraphicsResetStatusVal;
    gl::HandleType HandleTypeVal;
    gl::LightParameter LightParameterVal;
    gl::LogicalOperation LogicalOperationVal;
    gl::MaterialParameter MaterialParameterVal;
    gl::MatrixType MatrixTypeVal;
    gl::PointParameter PointParameterVal;
    gl::PrimitiveMode PrimitiveModeVal;
    gl::ProvokingVertexConvention ProvokingVertexConventionVal;
    gl::QueryType QueryTypeVal;
    gl::ShaderType ShaderTypeVal;
    gl::ShadingModel ShadingModelVal;
    gl::TextureEnvParameter TextureEnvParameterVal;
    gl::TextureEnvTarget TextureEnvTargetVal;
    gl::TextureTarget TextureTargetVal;
    gl::TextureType TextureTypeVal;
    gl::VertexAttribType VertexAttribTypeVal;
    const void *voidConstPointerVal;
    const void *const *voidConstPointerPointerVal;
    void *voidPointerVal;
    void **voidPointerPointerVal;
};

template <ParamType PType, typename T>
void SetParamVal(T valueIn, ParamValue *valueOut);

template <>
inline void SetParamVal<ParamType::TAlphaTestFunc>(gl::AlphaTestFunc valueIn, ParamValue *valueOut)
{
    valueOut->AlphaTestFuncVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TBufferBinding>(gl::BufferBinding valueIn, ParamValue *valueOut)
{
    valueOut->BufferBindingVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TBufferUsage>(gl::BufferUsage valueIn, ParamValue *valueOut)
{
    valueOut->BufferUsageVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TClientVertexArrayType>(gl::ClientVertexArrayType valueIn,
                                                           ParamValue *valueOut)
{
    valueOut->ClientVertexArrayTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TCullFaceMode>(gl::CullFaceMode valueIn, ParamValue *valueOut)
{
    valueOut->CullFaceModeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TDrawElementsType>(gl::DrawElementsType valueIn,
                                                      ParamValue *valueOut)
{
    valueOut->DrawElementsTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLDEBUGPROC>(GLDEBUGPROC valueIn, ParamValue *valueOut)
{
    valueOut->GLDEBUGPROCVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLDEBUGPROCKHR>(GLDEBUGPROCKHR valueIn, ParamValue *valueOut)
{
    valueOut->GLDEBUGPROCKHRVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLbitfield>(GLbitfield valueIn, ParamValue *valueOut)
{
    valueOut->GLbitfieldVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLboolean>(GLboolean valueIn, ParamValue *valueOut)
{
    valueOut->GLbooleanVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLbooleanConstPointer>(const GLboolean *valueIn,
                                                           ParamValue *valueOut)
{
    valueOut->GLbooleanConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLbooleanPointer>(GLboolean *valueIn, ParamValue *valueOut)
{
    valueOut->GLbooleanPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLbyte>(GLbyte valueIn, ParamValue *valueOut)
{
    valueOut->GLbyteVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLbyteConstPointer>(const GLbyte *valueIn, ParamValue *valueOut)
{
    valueOut->GLbyteConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLcharConstPointer>(const GLchar *valueIn, ParamValue *valueOut)
{
    valueOut->GLcharConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLcharConstPointerPointer>(const GLchar *const *valueIn,
                                                               ParamValue *valueOut)
{
    valueOut->GLcharConstPointerPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLcharPointer>(GLchar *valueIn, ParamValue *valueOut)
{
    valueOut->GLcharPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLclampx>(GLclampx valueIn, ParamValue *valueOut)
{
    valueOut->GLclampxVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLdouble>(GLdouble valueIn, ParamValue *valueOut)
{
    valueOut->GLdoubleVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLdoubleConstPointer>(const GLdouble *valueIn,
                                                          ParamValue *valueOut)
{
    valueOut->GLdoubleConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLdoublePointer>(GLdouble *valueIn, ParamValue *valueOut)
{
    valueOut->GLdoublePointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLeglImageOES>(GLeglImageOES valueIn, ParamValue *valueOut)
{
    valueOut->GLeglImageOESVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLenum>(GLenum valueIn, ParamValue *valueOut)
{
    valueOut->GLenumVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLenumConstPointer>(const GLenum *valueIn, ParamValue *valueOut)
{
    valueOut->GLenumConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLenumPointer>(GLenum *valueIn, ParamValue *valueOut)
{
    valueOut->GLenumPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLfixed>(GLfixed valueIn, ParamValue *valueOut)
{
    valueOut->GLfixedVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLfixedConstPointer>(const GLfixed *valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->GLfixedConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLfixedPointer>(GLfixed *valueIn, ParamValue *valueOut)
{
    valueOut->GLfixedPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLfloat>(GLfloat valueIn, ParamValue *valueOut)
{
    valueOut->GLfloatVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLfloatConstPointer>(const GLfloat *valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->GLfloatConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLfloatPointer>(GLfloat *valueIn, ParamValue *valueOut)
{
    valueOut->GLfloatPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLint>(GLint valueIn, ParamValue *valueOut)
{
    valueOut->GLintVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLint64Pointer>(GLint64 *valueIn, ParamValue *valueOut)
{
    valueOut->GLint64PointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLintConstPointer>(const GLint *valueIn, ParamValue *valueOut)
{
    valueOut->GLintConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLintPointer>(GLint *valueIn, ParamValue *valueOut)
{
    valueOut->GLintPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLintptr>(GLintptr valueIn, ParamValue *valueOut)
{
    valueOut->GLintptrVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLintptrConstPointer>(const GLintptr *valueIn,
                                                          ParamValue *valueOut)
{
    valueOut->GLintptrConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLshort>(GLshort valueIn, ParamValue *valueOut)
{
    valueOut->GLshortVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLshortConstPointer>(const GLshort *valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->GLshortConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLsizei>(GLsizei valueIn, ParamValue *valueOut)
{
    valueOut->GLsizeiVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLsizeiConstPointer>(const GLsizei *valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->GLsizeiConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLsizeiPointer>(GLsizei *valueIn, ParamValue *valueOut)
{
    valueOut->GLsizeiPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLsizeiptr>(GLsizeiptr valueIn, ParamValue *valueOut)
{
    valueOut->GLsizeiptrVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLsizeiptrConstPointer>(const GLsizeiptr *valueIn,
                                                            ParamValue *valueOut)
{
    valueOut->GLsizeiptrConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLsync>(GLsync valueIn, ParamValue *valueOut)
{
    valueOut->GLsyncVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLubyte>(GLubyte valueIn, ParamValue *valueOut)
{
    valueOut->GLubyteVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLubyteConstPointer>(const GLubyte *valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->GLubyteConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLubytePointer>(GLubyte *valueIn, ParamValue *valueOut)
{
    valueOut->GLubytePointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLuint>(GLuint valueIn, ParamValue *valueOut)
{
    valueOut->GLuintVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLuint64>(GLuint64 valueIn, ParamValue *valueOut)
{
    valueOut->GLuint64Val = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLuint64ConstPointer>(const GLuint64 *valueIn,
                                                          ParamValue *valueOut)
{
    valueOut->GLuint64ConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLuint64Pointer>(GLuint64 *valueIn, ParamValue *valueOut)
{
    valueOut->GLuint64PointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLuintConstPointer>(const GLuint *valueIn, ParamValue *valueOut)
{
    valueOut->GLuintConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLuintPointer>(GLuint *valueIn, ParamValue *valueOut)
{
    valueOut->GLuintPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLushort>(GLushort valueIn, ParamValue *valueOut)
{
    valueOut->GLushortVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLushortConstPointer>(const GLushort *valueIn,
                                                          ParamValue *valueOut)
{
    valueOut->GLushortConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLushortPointer>(GLushort *valueIn, ParamValue *valueOut)
{
    valueOut->GLushortPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLvoidConstPointer>(const GLvoid *valueIn, ParamValue *valueOut)
{
    valueOut->GLvoidConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGLvoidConstPointerPointer>(const GLvoid *const *valueIn,
                                                               ParamValue *valueOut)
{
    valueOut->GLvoidConstPointerPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TGraphicsResetStatus>(gl::GraphicsResetStatus valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->GraphicsResetStatusVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::THandleType>(gl::HandleType valueIn, ParamValue *valueOut)
{
    valueOut->HandleTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TLightParameter>(gl::LightParameter valueIn,
                                                    ParamValue *valueOut)
{
    valueOut->LightParameterVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TLogicalOperation>(gl::LogicalOperation valueIn,
                                                      ParamValue *valueOut)
{
    valueOut->LogicalOperationVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TMaterialParameter>(gl::MaterialParameter valueIn,
                                                       ParamValue *valueOut)
{
    valueOut->MaterialParameterVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TMatrixType>(gl::MatrixType valueIn, ParamValue *valueOut)
{
    valueOut->MatrixTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TPointParameter>(gl::PointParameter valueIn,
                                                    ParamValue *valueOut)
{
    valueOut->PointParameterVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TPrimitiveMode>(gl::PrimitiveMode valueIn, ParamValue *valueOut)
{
    valueOut->PrimitiveModeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TProvokingVertexConvention>(
    gl::ProvokingVertexConvention valueIn,
    ParamValue *valueOut)
{
    valueOut->ProvokingVertexConventionVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TQueryType>(gl::QueryType valueIn, ParamValue *valueOut)
{
    valueOut->QueryTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TShaderType>(gl::ShaderType valueIn, ParamValue *valueOut)
{
    valueOut->ShaderTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TShadingModel>(gl::ShadingModel valueIn, ParamValue *valueOut)
{
    valueOut->ShadingModelVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TTextureEnvParameter>(gl::TextureEnvParameter valueIn,
                                                         ParamValue *valueOut)
{
    valueOut->TextureEnvParameterVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TTextureEnvTarget>(gl::TextureEnvTarget valueIn,
                                                      ParamValue *valueOut)
{
    valueOut->TextureEnvTargetVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TTextureTarget>(gl::TextureTarget valueIn, ParamValue *valueOut)
{
    valueOut->TextureTargetVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TTextureType>(gl::TextureType valueIn, ParamValue *valueOut)
{
    valueOut->TextureTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TVertexAttribType>(gl::VertexAttribType valueIn,
                                                      ParamValue *valueOut)
{
    valueOut->VertexAttribTypeVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TvoidConstPointer>(const void *valueIn, ParamValue *valueOut)
{
    valueOut->voidConstPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TvoidConstPointerPointer>(const void *const *valueIn,
                                                             ParamValue *valueOut)
{
    valueOut->voidConstPointerPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TvoidPointer>(void *valueIn, ParamValue *valueOut)
{
    valueOut->voidPointerVal = valueIn;
}

template <>
inline void SetParamVal<ParamType::TvoidPointerPointer>(void **valueIn, ParamValue *valueOut)
{
    valueOut->voidPointerPointerVal = valueIn;
}

template <ParamType PType, typename T>
void SetParamVal(T valueIn, ParamValue *valueOut)
{
    UNREACHABLE();
}

template <typename T>
void InitParamValue(ParamType paramType, T valueIn, ParamValue *valueOut)
{
    switch (paramType)
    {
        case ParamType::TAlphaTestFunc:
            SetParamVal<ParamType::TAlphaTestFunc>(valueIn, valueOut);
            break;
        case ParamType::TBufferBinding:
            SetParamVal<ParamType::TBufferBinding>(valueIn, valueOut);
            break;
        case ParamType::TBufferUsage:
            SetParamVal<ParamType::TBufferUsage>(valueIn, valueOut);
            break;
        case ParamType::TClientVertexArrayType:
            SetParamVal<ParamType::TClientVertexArrayType>(valueIn, valueOut);
            break;
        case ParamType::TCullFaceMode:
            SetParamVal<ParamType::TCullFaceMode>(valueIn, valueOut);
            break;
        case ParamType::TDrawElementsType:
            SetParamVal<ParamType::TDrawElementsType>(valueIn, valueOut);
            break;
        case ParamType::TGLDEBUGPROC:
            SetParamVal<ParamType::TGLDEBUGPROC>(valueIn, valueOut);
            break;
        case ParamType::TGLDEBUGPROCKHR:
            SetParamVal<ParamType::TGLDEBUGPROCKHR>(valueIn, valueOut);
            break;
        case ParamType::TGLbitfield:
            SetParamVal<ParamType::TGLbitfield>(valueIn, valueOut);
            break;
        case ParamType::TGLboolean:
            SetParamVal<ParamType::TGLboolean>(valueIn, valueOut);
            break;
        case ParamType::TGLbooleanConstPointer:
            SetParamVal<ParamType::TGLbooleanConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLbooleanPointer:
            SetParamVal<ParamType::TGLbooleanPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLbyte:
            SetParamVal<ParamType::TGLbyte>(valueIn, valueOut);
            break;
        case ParamType::TGLbyteConstPointer:
            SetParamVal<ParamType::TGLbyteConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLcharConstPointer:
            SetParamVal<ParamType::TGLcharConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLcharConstPointerPointer:
            SetParamVal<ParamType::TGLcharConstPointerPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLcharPointer:
            SetParamVal<ParamType::TGLcharPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLclampx:
            SetParamVal<ParamType::TGLclampx>(valueIn, valueOut);
            break;
        case ParamType::TGLdouble:
            SetParamVal<ParamType::TGLdouble>(valueIn, valueOut);
            break;
        case ParamType::TGLdoubleConstPointer:
            SetParamVal<ParamType::TGLdoubleConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLdoublePointer:
            SetParamVal<ParamType::TGLdoublePointer>(valueIn, valueOut);
            break;
        case ParamType::TGLeglImageOES:
            SetParamVal<ParamType::TGLeglImageOES>(valueIn, valueOut);
            break;
        case ParamType::TGLenum:
            SetParamVal<ParamType::TGLenum>(valueIn, valueOut);
            break;
        case ParamType::TGLenumConstPointer:
            SetParamVal<ParamType::TGLenumConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLenumPointer:
            SetParamVal<ParamType::TGLenumPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLfixed:
            SetParamVal<ParamType::TGLfixed>(valueIn, valueOut);
            break;
        case ParamType::TGLfixedConstPointer:
            SetParamVal<ParamType::TGLfixedConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLfixedPointer:
            SetParamVal<ParamType::TGLfixedPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLfloat:
            SetParamVal<ParamType::TGLfloat>(valueIn, valueOut);
            break;
        case ParamType::TGLfloatConstPointer:
            SetParamVal<ParamType::TGLfloatConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLfloatPointer:
            SetParamVal<ParamType::TGLfloatPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLint:
            SetParamVal<ParamType::TGLint>(valueIn, valueOut);
            break;
        case ParamType::TGLint64Pointer:
            SetParamVal<ParamType::TGLint64Pointer>(valueIn, valueOut);
            break;
        case ParamType::TGLintConstPointer:
            SetParamVal<ParamType::TGLintConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLintPointer:
            SetParamVal<ParamType::TGLintPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLintptr:
            SetParamVal<ParamType::TGLintptr>(valueIn, valueOut);
            break;
        case ParamType::TGLintptrConstPointer:
            SetParamVal<ParamType::TGLintptrConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLshort:
            SetParamVal<ParamType::TGLshort>(valueIn, valueOut);
            break;
        case ParamType::TGLshortConstPointer:
            SetParamVal<ParamType::TGLshortConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLsizei:
            SetParamVal<ParamType::TGLsizei>(valueIn, valueOut);
            break;
        case ParamType::TGLsizeiConstPointer:
            SetParamVal<ParamType::TGLsizeiConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLsizeiPointer:
            SetParamVal<ParamType::TGLsizeiPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLsizeiptr:
            SetParamVal<ParamType::TGLsizeiptr>(valueIn, valueOut);
            break;
        case ParamType::TGLsizeiptrConstPointer:
            SetParamVal<ParamType::TGLsizeiptrConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLsync:
            SetParamVal<ParamType::TGLsync>(valueIn, valueOut);
            break;
        case ParamType::TGLubyte:
            SetParamVal<ParamType::TGLubyte>(valueIn, valueOut);
            break;
        case ParamType::TGLubyteConstPointer:
            SetParamVal<ParamType::TGLubyteConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLubytePointer:
            SetParamVal<ParamType::TGLubytePointer>(valueIn, valueOut);
            break;
        case ParamType::TGLuint:
            SetParamVal<ParamType::TGLuint>(valueIn, valueOut);
            break;
        case ParamType::TGLuint64:
            SetParamVal<ParamType::TGLuint64>(valueIn, valueOut);
            break;
        case ParamType::TGLuint64ConstPointer:
            SetParamVal<ParamType::TGLuint64ConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLuint64Pointer:
            SetParamVal<ParamType::TGLuint64Pointer>(valueIn, valueOut);
            break;
        case ParamType::TGLuintConstPointer:
            SetParamVal<ParamType::TGLuintConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLuintPointer:
            SetParamVal<ParamType::TGLuintPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLushort:
            SetParamVal<ParamType::TGLushort>(valueIn, valueOut);
            break;
        case ParamType::TGLushortConstPointer:
            SetParamVal<ParamType::TGLushortConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLushortPointer:
            SetParamVal<ParamType::TGLushortPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLvoidConstPointer:
            SetParamVal<ParamType::TGLvoidConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TGLvoidConstPointerPointer:
            SetParamVal<ParamType::TGLvoidConstPointerPointer>(valueIn, valueOut);
            break;
        case ParamType::TGraphicsResetStatus:
            SetParamVal<ParamType::TGraphicsResetStatus>(valueIn, valueOut);
            break;
        case ParamType::THandleType:
            SetParamVal<ParamType::THandleType>(valueIn, valueOut);
            break;
        case ParamType::TLightParameter:
            SetParamVal<ParamType::TLightParameter>(valueIn, valueOut);
            break;
        case ParamType::TLogicalOperation:
            SetParamVal<ParamType::TLogicalOperation>(valueIn, valueOut);
            break;
        case ParamType::TMaterialParameter:
            SetParamVal<ParamType::TMaterialParameter>(valueIn, valueOut);
            break;
        case ParamType::TMatrixType:
            SetParamVal<ParamType::TMatrixType>(valueIn, valueOut);
            break;
        case ParamType::TPointParameter:
            SetParamVal<ParamType::TPointParameter>(valueIn, valueOut);
            break;
        case ParamType::TPrimitiveMode:
            SetParamVal<ParamType::TPrimitiveMode>(valueIn, valueOut);
            break;
        case ParamType::TProvokingVertexConvention:
            SetParamVal<ParamType::TProvokingVertexConvention>(valueIn, valueOut);
            break;
        case ParamType::TQueryType:
            SetParamVal<ParamType::TQueryType>(valueIn, valueOut);
            break;
        case ParamType::TShaderType:
            SetParamVal<ParamType::TShaderType>(valueIn, valueOut);
            break;
        case ParamType::TShadingModel:
            SetParamVal<ParamType::TShadingModel>(valueIn, valueOut);
            break;
        case ParamType::TTextureEnvParameter:
            SetParamVal<ParamType::TTextureEnvParameter>(valueIn, valueOut);
            break;
        case ParamType::TTextureEnvTarget:
            SetParamVal<ParamType::TTextureEnvTarget>(valueIn, valueOut);
            break;
        case ParamType::TTextureTarget:
            SetParamVal<ParamType::TTextureTarget>(valueIn, valueOut);
            break;
        case ParamType::TTextureType:
            SetParamVal<ParamType::TTextureType>(valueIn, valueOut);
            break;
        case ParamType::TVertexAttribType:
            SetParamVal<ParamType::TVertexAttribType>(valueIn, valueOut);
            break;
        case ParamType::TvoidConstPointer:
            SetParamVal<ParamType::TvoidConstPointer>(valueIn, valueOut);
            break;
        case ParamType::TvoidConstPointerPointer:
            SetParamVal<ParamType::TvoidConstPointerPointer>(valueIn, valueOut);
            break;
        case ParamType::TvoidPointer:
            SetParamVal<ParamType::TvoidPointer>(valueIn, valueOut);
            break;
        case ParamType::TvoidPointerPointer:
            SetParamVal<ParamType::TvoidPointerPointer>(valueIn, valueOut);
            break;
    }
}

void WriteParamTypeToStream(std::ostream &os, ParamType paramType, const ParamValue &paramValue);
const char *ParamTypeToString(ParamType paramType);
}  // namespace angle

#endif  // LIBANGLE_FRAME_CAPTURE_UTILS_AUTOGEN_H_
