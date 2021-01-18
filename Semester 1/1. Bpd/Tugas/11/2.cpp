#include <stdio.h>

int main(){
	char A[11] ="BUDI LUHUR";
	int a,nilaiYangDicari,flag=0,index=0;
	
	printf("Masukan bilangan Character (Huruf Kapital) : "); scanf("%c" , &nilaiYangDicari);
	
	for(a=0; a<11; a++){
		printf("%3c" , A[a]);
	}
	
	for(a=0; a<11; a++){
		if (A[a] == nilaiYangDicari){
			flag++;
		}
	}

	printf("\n");
	if (flag > 0){
		printf("ADA\n");
		printf("%i" , flag);
	} else {
		printf("Tidak Ada");
	}
}
