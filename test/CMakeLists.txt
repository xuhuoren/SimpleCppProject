add_executable(person_test)
target_sources(person_test PRIVATE person_test.cpp)
find_package(GTest REQUIRED)
target_link_libraries(person_test PRIVATE GTest::gmock_main container)

add_test(person_test person_test)