#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;

  int z = x / y;
  float k = (float)x / y;

  printf("%d\n", z);
  printf("%0.2f\n", k);

  x += 1;
  printf("%d\n", x);
  return 0;
}
