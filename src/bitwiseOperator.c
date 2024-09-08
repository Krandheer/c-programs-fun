#include <stdio.h>

int main() {
  int x = 12; // 00001100
  int y = 6;  // 00000110
  int z = x & y;
  printf("%d\n", z);
  int o = x | y;
  printf("%d\n", o);
  int ex = x ^ y;
  printf("%d\n", ex);
  printf("left shift y: %d\n", y << 1);
  printf("left shift x: %d\n", x >> 1);

  return 0;
}
