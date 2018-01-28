#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,x;
	printf("Enter n value:");
	scanf("%d", &n);
	for(i=1,x=n;i<=n;i++)
	{
		for(j=x;j>=1;j--)
		{
		printf("\t %d", j);	
		}
		printf("\n");
		x--;
	}
	
}