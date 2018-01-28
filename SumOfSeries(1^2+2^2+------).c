//1^2+2^2+3^2+-----

#include <stdio.h>
#include<conio.h>
int main()
{
	int n, i=1, sum=0;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(i<=n)
	{
		sum= sum+ i*i;
		i++;
		
	}
	printf("%d", sum);
}