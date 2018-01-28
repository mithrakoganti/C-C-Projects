#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,x,flag,pos;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	printf("\n Enter an integer to be inserted:");
	scanf("%d", &x);
	printf("\n Enter the position:");
	scanf("%d", &pos);
	for(i=n-1;i>=pos-1;i--)
	{

		iary[i+1]=iary[i];
		
	}
	iary[pos-1]=x;
	n=n+1;
	printf("\n The new array after inserting an element is:");
	for(i=0;i<n;i++)
	{
		printf("\n %d", iary[i]);
	}
	
	
}
	