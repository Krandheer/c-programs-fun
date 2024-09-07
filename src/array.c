#include <stdio.h>

int main() {
  double prices[] = {5.0, 4.0, 123.0, 34, 5};
  // printf("%0.2lf\n", prices[2]);
  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    printf("%.2lf\n", prices[i]);
  }
  // printf("%d bytes \n", sizeof(prices));
  int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    for (int j = 0; j < sizeof(numbers[0]) / sizeof(numbers[0][0]); j++) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }
  return 0;
}
