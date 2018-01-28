#include<stdio.h>
#include<conio.h>


int main()
{
	int n,i,flag=1;
	printf("Enter an integer:1");
	scanf("%d", &n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		flag=0;
		break;
		}
	}
	if(flag==1)
	{
		printf("\n %d is a prime number",n);
	}
	else
	{
			printf("\n %d is not a prime number",n);
	}
}
