#include <stdio.h>

int main(){
	int A[11];
	int a,x;
	
	printf("Masukan 11 bilangan : \n");
	for(a=0; a<11; a++){
		scanf("%i" , &A[a]);
	}
	
	printf("\nIsi Array A (Genap) : ");
	for(a=0; a<11; a++){
		if(A[a]%2 == 0){
			printf("%3i" , A[a]);
		}
	}
}
