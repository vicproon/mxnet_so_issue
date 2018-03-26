//! @authors Полевой Д.В.
//! @brief   Головной заголовок модуля C-прокси для Caffe.

#ifndef HG_LIB_MXNET_H
#define HG_LIB_MXNET_H

#include "opencv/cv.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#ifdef _WINDOWS
#   define DLL_CALL __cdecl
#else
#   define DLL_CALL
#endif
#define LIBCAFFESERVER_EXPORTS
#ifdef LIBCAFFESERVER_EXPORTS
#   ifdef _WINDOWS
#      define LCS_API_EXPOR __declspec(dllexport) 
#   else
#      define LCS_API_EXPOR __attribute__((dllexport))
#   endif
#else
#   define LCS_API_EXPOR
#endif

enum Brew {CPU, GPU};

static const char* retMessages[] = {
  "ok",
  "libcaffe initialization invalid device",
  "libcaffe server library re initialization"
};

typedef int32_t LcsRet;

static const LcsRet LCSRET_OK = 0;
static const LcsRet LCSRET_ERR_INVALID_DEVICE = 1;
static const LcsRet LCSRET_ERR_SERVER_RE_INITIALIZATION = 2;
static const LcsRet LCSRET_ERR_SERVER_UNINITIALIZED = 3;
static const LcsRet LCSRET_ERR_ZERO_POINTER = 4;
static const LcsRet LCSRET_ERR_NOT_IMPLEMENTED = 5;
static const LcsRet LCSRET_INVALID_MODEL_HANDLE = 6;
static const LcsRet LCSRET_CAFFE_INTERNAL_ERR = 7;
static const LcsRet LCSRET_CAFFE_CUDA_ERROR = 8;
static const LcsRet LCSRET_ERR_INVALID_INPUT_SHAPE = 9;

static const LcsRet LCSRET_ERR = 5000;

static const int32_t LCS_DEVICE_ERR = -3;
static const int32_t LCS_DEVICE_ANY = -2;
static const int32_t LCS_DEVICE_CPU = -1;
static const int32_t LCS_DEVICE_GPU = 0;
static const int32_t LCS_DEVICE_GPU0 = LCS_DEVICE_GPU;
static const int32_t LCS_DEVICE_GPU1 = LCS_DEVICE_GPU0 + 1;
static const int32_t LCS_DEVICE_GPU2 = LCS_DEVICE_GPU0 + 2;
static const int32_t LCS_DEVICE_GPU3 = LCS_DEVICE_GPU0 + 3;
static const int32_t LCS_DEVICE_GPU_LAST = LCS_DEVICE_GPU3;

static const int32_t LCS_MODE_RELEASE = 0;
static const int32_t LCS_MODE_DEBUG = 1;
static const int32_t LCS_MODE_DEFAULT = LCS_MODE_DEBUG;



typedef int64_t CaffeProxyHandle;

typedef struct LibCafeInitOpts_t {
    int32_t device;                   // LCS_DEVICE_XXXX
    int32_t mode;                     // LCS_MODE_XXXXXX
    const char* pathWorkingFolder;    // may be 0
} LibCafeInitOpts;

typedef struct LibCafeNetInfo_t {
} LibCafeNetInfo;

LCS_API_EXPOR void DLL_CALL runTest(void);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //HG_LIB_MXNET_H 
