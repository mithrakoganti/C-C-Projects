#include <stdio.h>
#include<conio.h>

int main()
{
	int iary1[20], iary2[20], oary[20];
	int i,n;
	printf("Enter number of elements in array:");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d in array1:", i+1);
		scanf("%d", &iary1[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("\n Enter element %d in array2:", i+1);
		scanf("%d", &iary2[i]);
	}
	for(i=0;i<n;i++)
	{
		oary[i]=iary1[i]+iary2[i];
		printf("\n The sum of elements at index %d = %d",i, oary[i]);
		
	}
}