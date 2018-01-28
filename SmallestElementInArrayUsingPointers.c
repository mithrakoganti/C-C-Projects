#include<stdio.h>
#include<conio.h>

int main()
{
	int n,iary[20],i, *ap, small_num;
	printf("\n Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:",i+1);
		scanf("%d", &iary[i]);
	}
	
	ap=iary;//ap= &iary[0];
	small_num = *ap;
	ap++;
	for(i=1;i<n;i++)
	{
		if(small_num > *ap)
			small_num = *ap;
		ap++;	
		
	}
	printf("\n Smallest element in the array = %d", small_num);
	
}