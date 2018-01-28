// print given number of odd factorials

#include <stdio.h>
#include<conio.h>

int main()
{
	int n, i=1, fact=1;
//	printf("Enter an integer:");
//	scanf("%d", &x);
	printf("Enter number of values:");
	scanf("%d", &n);
	
	while(i<=2*n)
	{
	printf("\n %d!= %d", i, fact);
	i=i+2;
	fact=fact*(i-1)*i;
	
	}
}
