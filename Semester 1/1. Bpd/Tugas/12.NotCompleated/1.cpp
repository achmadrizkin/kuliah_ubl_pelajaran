#include <stdio.h>

int main(){
	int A[11] = {12,17,10,5,15,25,11,7,25,16,19};
	int i,a,nilaiTerkecil=A[0];
	
	// isi array nilai terkecil
	for(i=0; i<11; i++){
		if(A[i] > A[i-1]){
			nilaiTerkecil = A[i];
		}
	}
	printf("%i" , A[i]);
	
}
