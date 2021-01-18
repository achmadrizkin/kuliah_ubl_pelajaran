#include <stdio.h>

int main()
{
	
	char A[11]="BUDI LUHUR";
	char N;
	int i,flag=0;
	
	printf("Masukkan sebuah karakter = ");N=getchar();
	printf("%s",A);
	
	
	for (i=0;i<11;i++)
	{
		if (A[i]==N)
		{
		  flag=flag+1;
		}
	}
	 if(flag>0)
	{
		printf("\nADA");
	    printf("\nTerdapat %i bilangan yang sama",flag);
	}
	else printf("\nTIDAK ADA");
}
