#include <stdio.h>

int main() {
	int A[11] = {90,25,0,100,95,85,41,75,45,96,89};
	int a,flag;

	for(a=0; a<11; a++){
		if (A[a] > 90 ){ 
			flag = 1;
		} 
	}
	
	printf("Apakah ada mahasiswa yang nilainnya > 90 ?\n");
	if(flag == 1) {
		printf("Ada");
	} else {
		printf("Tidak ada");
	}
}
