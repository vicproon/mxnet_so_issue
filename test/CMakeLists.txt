project(test)

set(CPP_EXAMPLE_LIBS
  mxnet_static
  dmlc
  ${mxnet_LINKER_LIBS}
  )


add_definitions(-lpthread -std=c++11)

add_library(libexample SHARED lib.h lib.cpp)

target_link_libraries(libexample ${CPP_EXAMPLE_LIBS} pthread)

add_executable(test main.cpp)

target_link_libraries( test libexample dl )
