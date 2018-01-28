#include <stdio.h>
#include <conio.h>
int main()
{
	int n,x, i=1, sum=0, product;
	printf("Enter a base value:");
	scanf("%d", &x);
	printf("Enter the number of terms:");
	scanf("%d",&n);
	product=x;
	
	while(i<=n)
	{	
	sum = sum+product;
	product = product*x;
	i++;
	}
printf("Sum of the series = %d", sum);	
}