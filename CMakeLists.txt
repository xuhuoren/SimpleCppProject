cmake_minimum_required(VERSION 3.0.0)
project(SimpleCppProject VERSION 0.1.0)

list(APPEND CMAKE_MODULE_PATH
            ${CMAKE_BINARY_DIR}
            ${CMAKE_SOURCE_DIR}/cmake_module)
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(conan)

conan_cmake_configure(REQUIRES gtest/1.11.0
                      GENERATORS cmake_find_package)

conan_cmake_autodetect(settings)

conan_cmake_install(PATH_OR_REFERENCE .
                    BUILD missing
                    REMOTE conancenter
                    SETTINGS ${settings})

add_subdirectory(container)
add_executable(SimpleCppProject main.cpp)
target_link_libraries(SimpleCppProject PRIVATE container)

include(CTest)
enable_testing()
add_subdirectory(test)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
