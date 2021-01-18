#include <stdio.h>
int main()
{
	
	char A[8]="JAKARTA";
	//char B[8]="JAKARTA";
	
	int i,j,flag=0;
	
	for (j=0;j<7;j++){
		//	printf("\n%c",A[j]);
		for (i=j+1;i<7;i++){
		
			printf("\n%c vs %c",A[j],A[i]);
			
			if (A[j] == A[i]) { 
				flag = 1; break; 
			} 
		}
	}
	
	if(flag==1) { 
		printf("\nADA"); } 
	else { 
 		printf("\nTIDAK ADA");
	} 
	
	
}
