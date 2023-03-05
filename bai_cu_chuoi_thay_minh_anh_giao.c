#include <stdio.h>
#include<string.h>

int main() {

  int number;
  printf("Nhap so: ");
  scanf("%d", &number);

  char *chuoi = "";
  char *chuoi_hang_chuc = "";
  char *chuoi_hang_dv = "";

  int hang_chuc = number / 10;
  int hang_dv = number % 10;

  switch (hang_chuc)
  {
  case 1:
    chuoi_hang_chuc = "muoi"; 
    break;
  case 2:
    chuoi_hang_chuc = "hai muoi"; 
    break;
  case 3:
    chuoi_hang_chuc = "ba muoi"; 
    break;
  case 4:
    chuoi_hang_chuc = "bon muoi"; 
    break;
  case 5:
    chuoi_hang_chuc = "nam muoi"; 
    break;
  case 6:
    chuoi_hang_chuc = "sau muoi"; 
    break;
  case 7:
    chuoi_hang_chuc = "bay muoi"; 
    break;
  case 8:
    chuoi_hang_chuc = "tam muoi"; 
    break;
  case 9:
    chuoi_hang_chuc = "chin muoi"; 
    break;
  default:
    break;
  }

  switch (hang_dv)
  {
  case 0:
    chuoi_hang_dv = "";
    break;
  case 1:
    chuoi_hang_dv = "mot";
    break;
  case 2:
    chuoi_hang_dv = "hai";
    break;
  case 3:
    chuoi_hang_dv = "ba";
    break;
  case 4:
    chuoi_hang_dv = "bon";
    break;
  case 5:
    chuoi_hang_dv = "lam";
    break;
  case 6:
    chuoi_hang_dv = "sau";
    break;
  case 7:
    chuoi_hang_dv = "bay";
    break;
  case 8:
    chuoi_hang_dv = "tam";
    break;
  case 9:
    chuoi_hang_dv = "chin";
    break;
  default:
    break;
  }

  printf("%s %s\n", chuoi_hang_chuc, chuoi_hang_dv);


}