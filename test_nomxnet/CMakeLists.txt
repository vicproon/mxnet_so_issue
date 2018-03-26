project(test_nomxnet)

set(CPP_EXAMPLE_LIBS
  mxnet_static
  dmlc
  ${mxnet_LINKER_LIBS}
  )


add_definitions(-lpthread -std=c++11)

add_library(libexample SHARED lib.h lib.cpp)

add_executable(test_nomxnet main.cpp)

target_link_libraries( test_nomxnet libexample dl )
