#include "chuoi.h"


// ham doi so thap phan sang nhi phan
void d2b(int n){
  int c, k;
  for (c = 15; c >= 0; c--){
    k = n >> c;
    if (k & 1)
      printf("1");
    else printf("0");
  }
  printf("\n");
}