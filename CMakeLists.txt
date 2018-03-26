project(libmxnetserver)

find_package(CUDA QUIET REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ mxnet/include/ mxnet/cpp-package/include/ mxnet/nnvm/include mxnet/dmlc-core/include)

if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

cuda_add_library(${name} SHARED ${source})

add_subdirectory(mxnet)

add_definitions(-lpthread -std=c++11)
      
add_subdirectory(test)
add_subdirectory(test_nomxnet)
