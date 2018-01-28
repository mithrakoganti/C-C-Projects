/* 1
   1 2
   1 2 3
   1 2 3 4
   -------
   */


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j;
	printf("Enter n value:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("\t %d", j);	
		}
		printf("\n");
	}
	
}