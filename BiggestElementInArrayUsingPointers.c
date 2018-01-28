#include<stdio.h>
#include<conio.h>

int main()
{
	int n, iary[20],i, big_num, *ap;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	
	ap=&iary[0];
	big_num= *ap;
	ap++;
	
	for(i=1;i<n;i++)
	{
		if(big_num < *ap)
		big_num = *ap;
		ap++;
	}
	printf("\n Biggest element in the array = %d", big_num);
}