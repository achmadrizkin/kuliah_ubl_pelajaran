#include <stdio.h>

int main() {
	char cariKata[1], A[8] = "JAKARTA";
	int a,flag;
	
	printf("Cari kata (KAPITAL) : "); gets(cariKata);
	
	for (a=0; a<8; a++){
		if (A[a] == cariKata[0]) {
			flag = 1; break;
		} 
	}
	
	if (flag == 1) {
		printf("\nAda");
	} else {
		printf("\nTidak Ada");
	}
		
}
