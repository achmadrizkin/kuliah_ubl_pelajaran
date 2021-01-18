#include <stdio.h>

int main(){
	int NILAI[10];
	int a;
	
	printf("Input 10 nilai : \n");
	for(a=0; a<10; a++){
		scanf("%i" , &NILAI[a]);
	}
	
	// cetak mahasiswa yang lulus
	printf("\nDaftar mahasiswa yang lulus :  \n");
	for(a=0; a<5; a++){
		if (NILAI[a] >= 60){
			printf("%3i" , NILAI[a]);
		}
	}
}
