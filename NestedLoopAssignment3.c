/* 8 7 6 5 4 3 2
  8 7 6 5 4 3 2
   -----------
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
		for(j=8;j>=2;j--)
		{
		printf("\t %d", j);	
		}
		printf("\n");
	}
	
}