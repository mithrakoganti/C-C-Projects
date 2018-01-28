#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, j,k,l;
	printf("Enter an integer:");
	scanf("%d", &n);
	for(i=n;i>=1;i--)
	{
		for(j=n-i;j>=1;j--)
			{
			printf("\t");
			}
		for(k=2*i-1;k>=1;k--)
		{
		 	printf("\t *");
		}
			printf("\n");

	}
}