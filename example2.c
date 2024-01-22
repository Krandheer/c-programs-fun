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
  euf = usf - 1;
  printf("Floor is %d\n", euf);
  printf("%d\n", power(2, 4));
}
