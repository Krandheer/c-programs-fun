#include <stdio.h>

int main() {
  struct point {
    int x;
    int y;
  };
  struct point p1, p2;
  p1.x = 3;
  p1.y = 4;
  p2 = p1;
  printf("%d, %d\n", p2.x, p2.y);
}
