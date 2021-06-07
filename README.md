# CTestSample

my ctest_sample dashboard:
https://my.cdash.org/index.php?project=ctest_sample

Register dashboard step:

1. register user on dashborad:https://my.cdash.org/register 

2. start a new project: https://my.cdash.org/project/new#Info

   sample: https://github.com/jeffbaumes/cdash-examples

CMake file Config:

add include(CTest) in the top CMakeLists.txt file.

then add a file CTestConfig.cmake with such contents:

set(CTEST_DROP_METHOD "http")

set(CTEST_DROP_SITE "my.cdash.org")

set(CTEST_DROP_LOCATION "/submit.php?project=ctest_sample")

set(CTEST_DROP_SITE_CDASH TRUE)


