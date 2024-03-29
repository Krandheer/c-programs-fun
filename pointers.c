#include <stdio.h>

void func(int a, int *b) {
  a = 1;
  printf("address of y that is passed to reference b is: %p\n", b);
  // value of y should be replaced by 2 in main function
  *b = 2; /* reference to a memory address where 2 is being put */
  printf("\ncalled from func");
  printf("%d adress of reference b is: %p\n", a, &b);
}
int main() {
  int x = 42;
  int y = 43;
  printf("x: %d, y: %d\n", x, y);
  printf("address of y is: %p\n", &y);
  // passing the address of y to func where b get the reference of address of y
  // and then modifies it to 2
  func(x, &y);
  // y got modified as it got modified directly at memory address by func
  printf("x: %d, y: %d\n", x, y);
}
