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

LCS_API_EXPOR void DLL_CALL runTest(void);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //HG_LIB_MXNET_H 
