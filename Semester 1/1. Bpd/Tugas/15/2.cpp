#include <stdio.h>

int main() {
	char cariKata,A[11] = "JOGJAKARTA";
	int a,flag,jmlhKata;
	
	printf("Cari kata (Kapital) : "); scanf("%c" , &cariKata);
	
	for(a=0; a<11; a++){
		if (A[a] == cariKata) {
			jmlhKata++;
			flag = 1;
		} 
	}
	
	if (flag == 1) {
		printf("%c %i" ,cariKata, jmlhKata);
	} else {
		printf("\nTidak Ada");
	}
}
