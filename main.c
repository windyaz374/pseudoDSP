#include "chuoi.h"
int Mpn = 24;
int Nc = 1600;
int main(){
	int *ptrc, *ptrx1, *ptrx2;
	int cinit = 23456;
	int i;
	cp *com;
	com = (cp*)calloc(Mpn/2, sizeof(cp));
	ptrc = calloc(Mpn, sizeof(int));
	ptrx1 = (int *)calloc(Nc + Mpn, sizeof(int));
	ptrx2 = (int *)calloc(Nc + Mpn, sizeof(int));
	
	// Tao chuoi x1
	chuoix1(ptrx1);
	printf("Chuoi x1: ");
	xuat(ptrx1);
	
	// Tao chuoi x2
	chuoix2(ptrx2, cinit);
	printf("Chuoi x2: ");
	xuat(ptrx2);

	//Tao chuoi pseudo
	printf("Chuoi pseudo: \n");
	for (i = 0; i < Mpn; i++){
		*(ptrc + i) = (*(ptrx1 + i + Nc) + *(ptrx2 + i + Nc))%2;
		printf("%d", *(ptrc + i));
	}
	printf("\n");
	free(ptrx1);
	free(ptrx2);
	
	//Dieu che QPSK
	modul(ptrc, com);
	printf("Chuoi phuc sau khi dieu che QPSK:\n");
	for (i = 0; i < Mpn/2; i++){
		printf("So phuc thu %d:\n", i+1);
		printf("Q: ");
		d2b(com[i].Q);
		printf("I: ");
		d2b(com[i].I);
	}
	free(com); free(ptrc);

}