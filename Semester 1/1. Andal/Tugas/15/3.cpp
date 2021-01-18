#include <stdio.h>

int main() {
	char A[11] = "JOGJAKARTA";
	int a,flag,cariKata,jmlhKata;
	
	printf("Cari kata : "); scanf("%c" , &cariKata);
	
	for(a=0; a<11; a++){
		if (A[a] == cariKata) {
			jmlhKata++;
			flag = 1;
		} 
	}
	
	if (flag == 1) {
		printf("%c %i" , cariKata, jmlhKata);
	} else {
		printf("\nTidak Ada");
	}
}
