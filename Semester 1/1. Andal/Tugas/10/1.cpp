#include <stdio.h>

int main() {
	int A[11] = {12,17,10,5,15,25,11,8,3,16,19};
	int Ab[11] = {};
	int Bb[11] = {};
	int a,b=0,c=0;
	
	b=0;	// cetak A(b)
	for (a=0; a<11; a++){
		if (A[a]%2 == 1){
			Ab[b] = A[a];
			b++;
		}
	}
	
	c=4;	// indeks array B(b)
	for (a=0; a<11; a++){
		if (A[a]%2 == 1){
			Bb[c] = A[a];
			c++;
		}
	}

	printf("Isi Array A(b) : ");
	for(b=0; b<11; b++) {
		printf("%3i" , Ab[b]);
	}
	
	printf("\nIsi Array B(b) : ");
	for(c=0; c<11; c++) {
		printf("%3i" , Bb[c]);
	}

	
}
