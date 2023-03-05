#include <stdio.h>
#include <math.h>

int main() {
  
  int ngay, thang, nam;

  printf("Nhap ngay: ");
  scanf("%d", &ngay);

  printf("Nhap thang: ");
  scanf("%d", &thang);

  printf("Nhap nam: ");
  scanf("%d", &nam);

  printf("%02d/%02d/%04d", ngay, thang, nam);
}