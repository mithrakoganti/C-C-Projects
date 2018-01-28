//write a program to find the sum of even and odd digits in a given number seperatly

#include<stdio.h>
#include<conio.h>
int main()
{
	int n, last_digit,esum=0, osum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
	last_digit= n%10;
	if(last_digit%2==0)
	esum = esum+last_digit; //esum += last_digit;
	else
	
	{
	osum = osum+last_digit;
	}
	n=n/10;
	}
	printf("\n Sum of the even digits= %d", esum);
	printf("\n Sum of the odd digits= %d", osum);
	
}