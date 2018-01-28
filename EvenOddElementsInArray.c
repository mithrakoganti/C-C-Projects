#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,e_count=0,o_count=0;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	for(i=0;i<n;i++)
	{
		if(iary[i]%2==0)
		e_count++;
	}
	o_count = n-e_count;
	printf("\n The number of even elements in the array = %d", e_count);
	printf("\n The number of odd elements in the array = %d", o_count);
	
}