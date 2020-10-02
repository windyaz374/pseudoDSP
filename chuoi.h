#ifndef CHUOI_H_
#define CHUOI_H_

#include <stdio.h>
#include <stdlib.h>

void chuoix1(int *x1);
void xuat(int *pr);
void chuoix2(int *x2, int cinit);

typedef struct Complex{
		int Q;
		int I;
	} cp;

void modul(int *ptrc, cp *com);
#endif
