// find sum of 1/2+2/3+3/4+-----n/(n+1)

#include <stdio.h>
#include<conio.h>

int main()
{
	int n, i=1;
	float sum;
	sum=0;
	printf("Enter an integer:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum = sum +(float)i/(i+1);
		i++;
	}
	printf("\n sum = %f", sum);
}