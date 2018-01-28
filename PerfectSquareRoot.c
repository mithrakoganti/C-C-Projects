//find whether a given number has perfect square root or not

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i=1;
	printf("Enter an integer:");
	scanf("%d", &n);
	while(i*i<n)
	{
		i++;
	}
	if(i*i==n)
	printf("Yes");
	else
	printf("No");
	
}