#include "chuoi.h"
int Mpn;

void modul(int *ptrc, cp *com){
	int i;
	for (i = 0; i < Mpn/2; i++){
		if ((*(ptrc + 2*i) == 0) && (*(ptrc + 2*i + 1) == 0)){
			com[i].Q = 23170;
			com[i].I = 23170;
		}
		else if ((*(ptrc + 2*i) == 0) && (*(ptrc + 2*i + 1) == 1)){
			com[i].Q = -23170;
			com[i].I = 23170;
		}
		else if ((*(ptrc + 2*i) == 1) && (*(ptrc + 2*i + 1) == 0)){
			com[i].Q = 23170;
			com[i].I = -23170;
		}
		else {
			com[i].Q = -23170;
			com[i].I = -23170;
		}

	}
}