#include <stdio.h>

int main() {
	int A[10] = {12, 15, 7, 10, 25, 2, 17, 25, 5, 20};
	int a=0,nilaiYangDicari,nilaiYangSama,flag=0;
	
	printf("Masukan bilangan Integer : "); scanf("%i" , &nilaiYangDicari);
	
	// mencari nilai yang dicari
	for(a=0; a<10; a++){
		if (A[a] == nilaiYangDicari){ 
			flag = 1;
			nilaiYangSama++;
		}
	}
	
	if(flag == 1) {
		printf("FOUND\n");
		printf("Jumlah nilai yang sama : %i" , nilaiYangSama-1);
	} else {
		printf("NOT FOUND");
	}

}
