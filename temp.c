#include <stdio.h>

int main() {
  char name[16];
  printf("what is your name: ");
  scanf("%s", name);
  printf("hello %s\n", name);
  return 0;
}
