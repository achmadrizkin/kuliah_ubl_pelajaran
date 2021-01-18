#include <stdio.h>
int main()
{
	int X[4]={12,2,7,10};
	int Y[6]={15,4,16,20,25,30};
	int Z[10]={0};
	int i,j;
	j=0;
	
	//cetak isi Array X
	printf("Isi Array X =");
	for (i=0;i<4;i++)
		printf("%4i",X[i]);
	
	printf("\n");
	
	//cetak isi Array Y
	printf("Isi Array X =");
	for (i=0;i<6;i++)
		printf("%4i",Y[i]);
	
	//salin isi Array X yg nilainya < 10  ke Array Z
	for (i=0;i<4;i++){
		if (X[i]<10){
			Z[j]=X[i];
			j++;
		}
	}
	
	//salin isi Array Y yg berada di indeks/lokasi ganjil  ke Array Z
	for (i=0;i<6;i++){
		if (Y[i]%2 != 0){
			Z[j]=Y[i];
			j++;
		}
	}
    printf("\n");
	//cetak isi Array Z
	printf("Isi Array Z =");
	for (i=0;i<10;i++)
		printf("%4i",Z[i]);
	
}
