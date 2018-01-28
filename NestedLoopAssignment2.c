/* 3 4 5 6 7 8
   3 4 5 6 7 8
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
		for(j=3;j<=8;j++)
		{
		printf("\t %d", j);	
		}
		printf("\n");
	}
	
}