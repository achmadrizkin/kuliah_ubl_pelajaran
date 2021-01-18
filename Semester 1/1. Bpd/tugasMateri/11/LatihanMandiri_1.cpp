#include <stdio.h>

int main()
{
	
	int A[11]={12,17,10,5,15,25,11,7,25,16,19};
	int N,i,flag=0;
	
	printf("Masukkan Bilangan integer = ");scanf("%i",&N);
	for (i=0;i<11;i++)
	{
		printf("%5i",A[i]);
	}
	
	
	for (i=0;i<11;i++)
	{
		if (A[i]==N)
		 flag++;
	}
	 if(flag>0)
	{
		printf("\nADA");
		printf("\nTerdapat %i bilangan yang sama",flag);
	}
	else printf("\nTIDAK ADA");
}
