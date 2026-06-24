#include <stdio.h>

int power(int base, int exponent) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int main() {
  for (int i = 2; i < 8; i++) {
    printf("2 to the power of %d is %d\n", i, power(2, i));
  }
  return 0;
}
