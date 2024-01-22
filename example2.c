#include <stdio.h>

int power(int x, int n) {
  int p = 1;
  for (int i = 0; i < n; i++) {
    p = x * p;
  }
  return p;
}

int main() {
  int usf, euf;
  printf("Enter floor number\n");
  scanf("%d", &usf);
  printf("Floor is %d\n", euf);

  int a = 2;  int b = 3;
  printf("%d\n", power(a, b));
}
