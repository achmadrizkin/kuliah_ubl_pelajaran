#include "stdio.h"

int main(){
	int NILAI[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
	int LULUS[12] = {};
	int GAGAL[12] = {};
	int i,b=0,c=0,rata=0,total=0, jmlhMahasiswaLulus=0, jmlhMahasiswaGagal=0;
	
	for(i=0; i<12; i++){
		total = total + NILAI[i];
	}
	rata = total/12;

	for(i=0; i<12; i++){
		if(NILAI[i] >= 60){
			LULUS[b] = NILAI[i];
			b++;
			jmlhMahasiswaLulus;
		} else {
			GAGAL[c] = NILAI[i];
			c++;
			jmlhMahasiswaGagal=0;
		}
	}
	
	printf("\n\nIsi Array Lulus :");
	for(i=0; i<12; i++){
		printf("%3i" , LULUS[i]);
	}
	printf("\nJumlah mahasiswa yang lulus : %i" , jmlhMahasiswaLulus);
	
	printf("\n\nIsi Array Gagal :");
	for(i=0; i<12; i++){
		printf("%3i" , GAGAL[i]);
	}
	printf("\nJumlah mahasiswa yang lulus : %i" , jmlhMahasiswaGagal);
}
