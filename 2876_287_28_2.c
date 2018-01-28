#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d", &n);
	for(;n>0;n=n/10)
	{
	printf("\n %d", n);	
	}
	
}
