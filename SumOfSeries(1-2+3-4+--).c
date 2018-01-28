//1-2+3-4+5-----

#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i=1, sign=1, sum=0;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(i<=n)
	{
		sum = sum+i*sign;
		sign=-1*sign;
		i++;
	}
	printf("Sum of the series= %d", sum);
}