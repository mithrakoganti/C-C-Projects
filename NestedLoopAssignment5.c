/*----- 6 5 4 3 2 1
  ----- 5 4 3 2 1
  ----- 4 3 2 1
  ----- 3 2 1 
  ----- 2 1
  ----- 1
  */

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j;
	printf("Enter n value:");
	scanf("%d", &n);
	for(n;n>=1;n--)
	{
		for(i=n;i>=1;i--)
		{
		printf("\t %d", i);	
		}
		printf("\n");
	}
	
}