#include <stdio.h>

int main() {

  int a, b;
  printf("Nhap so a: ");
  scanf("%d", &a);

  printf("Nhap so b: ");
  scanf("%d", &b);

  printf("Tong: %d\n", a + b);
  printf("Hieu: %d\n", a - b);
  printf("Tich: %d\n", a * b);

  if (b == 0) {
    printf("a khong chia dc cho b");
  } else {
    printf("Thuong: %.2f \n", (float)a / (float)b);

    if(a % b == 0) {
      printf("a chia het cho b");
    } else {
      printf("a khong chia het cho b");
    }
  }
  
  
}