#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,j,temp;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=iary[i];
		iary[i]=iary[j];
		iary[j]=temp;
	}
	printf("\n Reverse array is:");
	for(i=0;i<n;i++)
	{
		printf("\n Element at index%d = %d", i,iary[i]);
	}
}
	
	