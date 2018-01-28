//printing the list of factorials

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, fact=1, i=1;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(i<=n)
	{
		fact=fact*i;
		printf("\n Factorial of %d is %d",i, fact );
		i++;
	}
	
}