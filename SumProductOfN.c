//sum and product of 1 to n integers

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i =1, sum=0, product =1;
	printf("Enter an integer:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum = sum+i;
		product = product*i;
		i++;
	}
	printf("\n \t Sum of %d integers = %d", n, sum);
	printf("\n \t Product of %d integers = %d", n, product);
	
}