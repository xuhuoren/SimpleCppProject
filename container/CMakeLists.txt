add_library(container)

target_sources(container PRIVATE person.cpp)

target_include_directories(container
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )