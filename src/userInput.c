#include <stdio.h>

int main() {
  int age;
  char name[25];

  printf("What is your name: ");
  scanf("%s", name);

  printf("Enter you age: ");
  scanf("%d", &age);

  printf("you name is %s and you age is %d\n", name, age);
  return 0;
}
