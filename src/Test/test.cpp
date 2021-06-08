#include "lib1.h"
#include "gtest/gtest.h"
#include <stdio.h>

TEST(test_add_case1, add) {
  ASSERT_TRUE(add(2, 2) == 4);
}

TEST(test_add_case2, add) {
  ASSERT_TRUE(add(1, 2) == 3);
}