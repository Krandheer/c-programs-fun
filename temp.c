#include <stdio.h>

int main() {
  int lower = 0;
  int upper = 300;
  float celsius;
  float farh;
  while (lower <= upper) {

    celsius = (5.0 / 9.0) * (lower - 32.0);
    farh = lower;
    printf("%4.0f, %6.1f\n", farh, celsius);
    lower += 20;
  }
}
