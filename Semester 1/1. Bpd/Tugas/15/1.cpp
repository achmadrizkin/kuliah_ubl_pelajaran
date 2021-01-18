#include <stdio.h>

int main() {
	char cariKata, A[8] = "JAKARTA";
	int a,flag;
	
	printf("Cari kata (KAPITAL) : "); scanf("%c" , &cariKata);
	
	for (a=0; a<8; a++){
		if (A[a] == cariKata) {
			flag = 1;
		} 
	}
	
	if (flag == 1) {
		printf("\nAda");
	} else {
		printf("\nTidak Ada");
	}
		
}
