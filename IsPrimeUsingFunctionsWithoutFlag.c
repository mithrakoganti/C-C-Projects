#include<stdio.h>
#include<conio.h>

int isPrime(int);

int main()
{
int n,flag;
printf("\n Enter an integer:");
scanf("%d", &n);
flag=isPrime(n);
if(flag==1)
printf("\n The entered integer is prime");
else
printf("\n The entered integer is  not prime");
	
}
int isPrime(int n)
{
	int i;
	if(n==2)
	{
		return 1;
	}	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
			
	}
	return 1;
}
