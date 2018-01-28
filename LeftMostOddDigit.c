#include<stdio.h>
#include<conio.h>

int main()
{
	int n, digit,left_digit;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(n>0)
	{
		digit=n%10;
		
		if (digit%2!=0)
		left_digit = digit;
		n=n/10;
		
	}
		printf("Left most odd digit = %d", left_digit);
}