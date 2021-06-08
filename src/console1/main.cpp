#include "lib1.h"
#include "gtest/gtest.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc == 4) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    return add(a, b) == c ? EXIT_SUCCESS : EXIT_FAILURE;
  }
  return 0;
}
