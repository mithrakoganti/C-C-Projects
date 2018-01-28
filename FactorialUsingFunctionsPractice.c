#include<stdio.h>
#include<conio.h>

long int factorial(int);

int main()
{
	int n;
	long int fact;
	printf("Enter an integer:");
	scanf("%d", &n);
	fact = factorial (n);
	printf("\n Factorial of %d = %ld", n, fact);	
}
long int factorial(int x)
{
	int i;
	long int fact=1;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
		
	}
	return fact;
}