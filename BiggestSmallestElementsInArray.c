#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,big_num=0, small_num=0;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	for(i=0;i<n;i++)
	{
	
	if(iary[i]>big_num)
	{
	big_num=iary[i];	
	}
	}
	printf("\n Biggest element in the array = %d", big_num);
 small_num=iary[0];
    for(i=1;i<n;i++)
    {
	if(iary[i]<small_num)
		small_num = iary[i];
	}
	printf("\n Smallest element in the array = %d", small_num); 
}