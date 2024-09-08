#include <stdio.h>

int main() {
  char x = 'X';
  int y = 1;
  double z = 'z';
  // printf("%d bytes\n", sizeof(x));
  // printf("%d bytes\n", sizeof(y));
  // printf("%d bytes\n", sizeof(y));
  // printf("%p address\n", &x);
  // printf("%p y address\n", &y);
  // printf("%p z address\n", &z);
  int age = 21;
  printf("%p address of variable \n", &age);
  printf("%d value of variable \n", age);

  return 0;
}
