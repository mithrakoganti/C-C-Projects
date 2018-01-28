#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,x,flag;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	printf("\n Enter an integer:");
	scanf("%d", &x);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(iary[i]==x)
		{
		flag=1;	
		break;
		}
	}
	if(flag==1)
	printf("\n The entered element is in the list of array elements");
	else
	printf("\n The entered element is not in the list of array elements");
	
}
		