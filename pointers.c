#include <stdio.h>

void func(int a, int *b) {
  a = 1;
  *b = 2; /* reference to a memory address where w is being put */
  printf("called from func\n");
  printf("%d %p\n", a, &b);
}
int main() {
  int x = 42;
  int y = 43;
  printf("x: %d, y: %d\n", x, y);
  printf("%p\n", &y);
  // passing the address of y to func where b get the reference of address of y
  // and then modifies it to 2
  func(x, &y);
  // y got modified as it got modified directly at memory address by func
  printf("x: %d, y: %d\n", x, y);
}
