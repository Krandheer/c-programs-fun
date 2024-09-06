#include <stdbool.h> // to use boolean
#include <stdio.h>

int main() {
  int x = 123;
  int age = 30;
  float gpa = 9.7;
  char grade = 'A';         // store single character %c
  char name[] = "randheer"; // array of character as string %s
  bool e = true;            // %d
  printf("hello you are %s\n", name);
  printf("hello you are %d year old\n", age);
  printf("your grade in college was %0.2f\n", gpa);
  printf("%d\n", e);
  return 0;
}
