#include "chuoi.h"
int Nc;
int Mpn;

void chuoix2(int *x2, int cinit){
	int i, k;
  	for (i = 30; i >= 0; i--){
    	k = cinit >> i;
    	if (k & 1)
         	*(x2 + i) = 1;
    	else *(x2 + i) = 0;
  	}
  	for (i = 31; i < (Nc + Mpn); i++){
  		*(x2 + i) = (*(x2 + i -28) + *(x2 + i -29) + *(x2 + i -30) + *(x2 + i -31 ))%2;
  	}
}