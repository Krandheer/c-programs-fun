#include <math.h>
#include <stdio.h>

int main() {
  const float PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("Enter the value of radius: ");
  scanf("%lf", &radius);
  circumference = 2 * PI * 2;
  area = PI * pow(radius, 2);
  printf("circumference is %lf\n", circumference);
  printf("area is %lf\n", area);
  return 0;
}
