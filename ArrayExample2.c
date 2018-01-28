#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,sum=0;
	float average;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+iary[i];
		average=(float)sum/n;
		
	}
	printf("\n Average of given elements = %f ", average);
	
}