/* 1 2 3 4 5 4 3 2 1
--------------------- 
n rows
*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k;
	printf("Enter number of rows:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=5;j++)
	{
		printf("\t %d", j);
	
	}
		for(k=4;k>=1;k--)
		
		{
			printf("\t %d",k);
		}
	 printf("\n");
	}
}