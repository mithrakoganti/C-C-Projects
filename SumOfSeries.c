// find sum of 2^0+2^1+2^2+ -------- +2^n

#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i=0, sum=0, product = 1;
	printf("Enter an integer value:");
	scanf("%d", &n);
	while(i<=n)
	{
		sum= sum+ product;
		printf("\t sum = %d", sum);
		product= product*2;
		printf("\t product = %d \n \n ", product);
		i++;
	}
	printf("\t series sum= %d", sum);
}