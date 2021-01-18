#include <stdio.h>
int main()
{
	int A[12]={12,17,10,15,25,11,7,25,16,22,14,5};
	int B[12]={0};
	int C[12]={0};
	int i,j,k;
	
	
	//cetak isi Array A
	printf("Isi Array A =");
	for (i=0;i<12;i++)
		printf("%4i",A[i]);
		
	printf("\n");
	
//salin isi Array A yg nilainya GANJIL ke Array B
	j=0;
	for (i=0;i<12;i++){
		if (A[i]%2==1){
			B[j]=A[i];
			j++;
		}
	}
	
/*salin isi Array A yg nilainya GENAP
  ke Array C */
	k=0;
	for (i=0;i<12;i++){
		if (A[i]%2==0){
			C[k]=A[i];
			k++;
		}
	}
    //cetak isi Array B
	printf("Isi Array B =");
	for (i=0;i<j;i++)
		printf("%4i",B[i]);
	
	printf("\n");
	//cetak isi Array C
	printf("Isi Array C =");
	for (i=0;i<k;i++)
		printf("%4i",C[i]);
	
	return(0);	
}
