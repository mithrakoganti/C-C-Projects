#include<stdio.h>
#include<conio.h>

int main()
{
	int n, sum=0,i,digit;
	printf("Enter an integer:");
	scanf("%d", &n);

//	printf("\n sum=%d", sum);
	for(;n>9;)
	{
		sum=0;
		for(;n>=1;)
		{    
			digit=n%10;
			sum=sum+digit;
			n=n/10;
		}
		n = sum;
		//printf("\n n=%d", n);
		//printf("\n sum=%d", sum);	
	}
	printf("\n sum=%d", sum);
	
}