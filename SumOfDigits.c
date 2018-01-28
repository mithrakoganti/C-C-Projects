//sum of digits in a given number


#include<stdio.h>
#include<conio.h>
int main()
{
	int n, last_digit,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
	last_digit= n%10;
	sum=sum+last_digit;
	n=n/10;
	}
	printf("Sum of the digits=%d", sum);
	
}