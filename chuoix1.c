#include "chuoi.h"
int Nc;
int Mpn;

void chuoix1(int *x1){
	int i;
	*x1 = 1;
	for (i = 1; i <= 30; i++){
		*(x1 + i) = 0;
	}
	for (i = 31; i < (Nc +Mpn); i++){
		*(x1 + i) = (*(x1 + i -28) + *(x1 + i -31 ))%2;
	}
}