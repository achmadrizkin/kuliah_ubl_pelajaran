#include "stdio.h"

// Achmad Rizki Nur Fauzie	2011500713	XC-C1
int main(){
	int X[4] = {12,2,7,10};
	int Y[6] = {15,4,16,20,25,30};
	int Z[10] = {};
	int a,b;
	
	// cetak nilai X
	printf("Isi Array X : ");
	for(a=0; a<4; a++){
		printf("%3i" , X[a]);
	}
	
	printf("\n");
	
	// cetak nilai Y
	printf("Isi Array Y : ");
	for(a=0; a<6; a++){
		printf("%3i" , Y[a]);
	}
	
	printf("\n");
	
	b=0; //indeks untuk array Z
	for(a=0; a<=4; a++){
		if(X[a] < 10){
			Z[b] = X[a];
			b++;
		}
	}
	for(a=0; a<=6; a++){
		if(a==0 || a==4){
			Z[b] = Y[a];
			b++;
		}
	}

	printf("\nSehingga, Isi Array Z menjadi : ");
	// print nilai Z
	for(a=0; a<10; a++){
		printf("%3i", Z[a]);
	}

}
