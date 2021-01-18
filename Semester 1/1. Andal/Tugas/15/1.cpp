#include <stdio.h>

int main() {
	char A[6]; 
	char B[8];
	int a,x,flag;
	
	// cetak isi Array A
	printf("Isi Array A : ");
	gets(A);
	
	// cetak isi Array B
	printf("\nIsi Array B : ");
	gets(B);
	
	for (x=0; x<5; x++){
		for(a=0; a<7; a++){
			if(A[x] == B[a]){
				flag = 1; break;
			}
		}
	}
	
	if (flag == 1) {
		printf("\nAda");
	} else {
		printf("\nTidak Ada");
	}
}
