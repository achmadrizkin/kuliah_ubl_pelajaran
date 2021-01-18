#include <stdio.h>

int main(){
	int A[11] = {12,17,10,5,15,25,11,7,25,16,19};
	int a=0,nilaiYangDicari,flag=0;
	
	printf("Masukan bilangan Integer : "); scanf("%i" , &nilaiYangDicari);
	
	// cetak array A[11]
	for(a=0; a<11; a++){
		printf("%3i" , A[a]);
	}
	
	// mencari nilai yang dicari
	for(a=0; a<11; a++){
		if (A[a] == nilaiYangDicari){ 
			flag = 1;
		}
	}
	
	// pembuktian
	if (flag == 1) {
		printf("\nAda\n");
		printf("Lokasi bilangan yang sama : ");
			for(a=0; a<11; a++){
				if (A[a] == nilaiYangDicari){ 
				printf("%3i" , a);
				}
			}
	} else {
		printf("\nTidak ada");
	}
	
	
}
