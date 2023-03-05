#include <stdio.h>
#include <math.h>

int main()
{

  float a;
  printf("Nhap vao so a: ");
  scanf("%f", &a);

  printf("%.0f\n", pow(a, 2));
  printf("%.0f\n", pow(a, 3));
  printf("%.0f\n", pow(a, 4));
}