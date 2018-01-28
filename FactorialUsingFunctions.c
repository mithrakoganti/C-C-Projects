#include<stdio.h>
#include<conio.h>


long int factorial(int);


int main()
{
	int n;
	long int fact;
printf("Enter 'n' value:");
scanf("%d", &n);
  fact = factorial(n);

printf("\n Factorial of %d=%ld", n,fact);	
}

long int factorial(int n)
{
	long int fact=1;
	int i;
	for(i=n;i>=1;i--)
		fact=fact*i;
	return fact;
}