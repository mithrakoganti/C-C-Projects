//Finding the biggest digit in a given number

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,big_num=0, temp;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(n>0)
	{
		temp=n%10;
		if(big_num<temp)
		{
			big_num=temp;
		}
		n=n/10;
	}
	printf("The biggest digit in the given number = %d", big_num);
}