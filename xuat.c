#include "chuoi.h"
int Nc, Mpn;

void xuat(int *pr){
	int i;
	for (i = 0; i < Nc + Mpn; i++){
		printf("%d",*(pr + i));
	}
	printf("\n\n");
}