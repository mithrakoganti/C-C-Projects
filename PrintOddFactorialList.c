// print list of odd factorials

#include <stdio.h>
#include<conio.h>

int main()
{
	int n, i=1, fact=1;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(i<=n)
	{
	fact=fact*i;
	if(i%2!=0)
	printf("\n Factorial of %d = %d", i, fact);
	i++;
	}
}
