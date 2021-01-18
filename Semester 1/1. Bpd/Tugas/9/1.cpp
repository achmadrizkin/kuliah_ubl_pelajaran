#include <stdio.h>

int main(){
	int A[5];
	int a;
	
	printf("Masukan 5 bilangan : \n");
	for(a=0; a<5; a++){
		scanf("%i" , &A[a]);
	}
	
	// cetak isi array
	printf("\nIsi Array A : ");
	for(a=0; a<5; a++){
		printf("%3i" , A[a]);
	}
	
	printf("\nIsi Array Ganjil : ");
	for(a=0; a<5; a++){
		if(A[a]%2 == 1){
			printf("%3i" , A[a]);
		}
	}
}
