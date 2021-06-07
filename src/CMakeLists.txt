cmake_minimum_required(VERSION 2.8)
PROJECT (CTestSample)

add_subdirectory(lib1)
add_subdirectory(console1)
add_subdirectory(googletest)
add_subdirectory(test)

#test with cmake
enable_testing()
include(CTest)
add_test(NAME Test COMMAND Test)
add_test(NAME test_console1_a COMMAND console1 1 2 3)
add_test(NAME test_console1_b COMMAND console1 2 2 4)


  