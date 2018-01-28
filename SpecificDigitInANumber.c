//Check whether a specific digit is in the given number or not

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,specific_digit, digit,x;
	printf("Enter an integer:");
	scanf("%d", &n);
	printf("\n Enter the specific digit:");
	scanf("%d", &x);	
	while(n>0)
	{
	digit = n%10;
		if(digit==x)
	{
		printf("The given number has the specified digit");
		return;
	}

		n=n/10;
		
	}
 printf("\n The given number does not have the specified digit");
}