#include<stdio.h>
#include<conio.h>

void print_x(int *px)
{
	printf("\n %d",*px);
	
}

int main()
{
	int n;
	printf("\n Enter an integer:");
	scanf("%d", &n);
	print_x(&n);	
}
