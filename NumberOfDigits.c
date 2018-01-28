//Count number of digits in a given number

#include<stdio.h>
#include<conio.h>

int main()
{
int n, count = 0;
printf("Enter an integer:");
scanf("%d", &n);
while(n>0)
{
	n=n/10;
	count++;
}
		printf("Number of digits in the given number = %d", count);	
}