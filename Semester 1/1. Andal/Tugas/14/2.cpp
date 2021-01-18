#include <stdio.h>

int main(){
	int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
	int B[12] = {};
	int C[12] = {};
	int a,b=0,c=0,rata=0,total=0;
	
	for(a=0; a<12; a++){
		total = total + A[a];
	}
	rata = total/12;
	
	for (a=0; a<12; a++) {
		if(A[a] > rata) {
			B[b] = A[a];
			b++;
		} else {
			C[c] = A[a];
			c++;
		}
	}
	
	printf("\n\n Isi Array A : ");
	for(a=0; a<12; a++){
		printf("%3i" , A[a]);
	}
	
	printf("\n\n Isi Array B : ");
	for(a=0; a<12; a++){
		printf("%3i" , B[a]);
	}
	
	printf("\n\n Isi Array C : ");
	for(a=0; a<12; a++){
		printf("%3i" , C[a]);
	}
	
}
