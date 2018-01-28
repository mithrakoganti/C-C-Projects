#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, j,k,l;
	printf("Enter an integer:");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf("\t ");
		}
		for(k=1;k<=i;k++)
		{
			printf("\t %d",k);
		}
		for(l=i;l>=1;l--)
		{
			printf("\t %d",l);
		}
		
		printf("\n");
	}
}