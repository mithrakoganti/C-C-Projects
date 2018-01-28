// Reversing the digits in a number

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, rev_num=0;
	printf("Enter an integer:");
	scanf("%d", &n);
	
	while(n>0)
	{
	rev_num=rev_num*10+n%10;
		n=n/10;
	}
	
	printf("Number after reversing the digits = %d", rev_num);
	
}