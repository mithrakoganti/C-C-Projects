#include<stdio.h>
#include<conio.h>
int main()
{
	int n, p=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n/p>9)
	{
	p=p*10;
	}
	printf("\n %d", p);
	
}
	