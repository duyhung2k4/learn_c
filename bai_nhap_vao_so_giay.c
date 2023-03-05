#include <stdio.h>

int main() {

  int giay;
  printf("Nhap vao so giay: ");
  scanf("%d", &giay);

  int gio = giay / 3600;
  int so_giay_thua = giay % 3600;

  int phut = so_giay_thua / 60;
  int so_giay_thua2 = so_giay_thua % 60;

  printf("%02d-%02d-%02d", gio, phut, so_giay_thua2);
}