#include <stdio.h>
#include<conio.h>

int main()
{
	int iary[20];
	int i,n,j,flag;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	for(i=0;i<n;i++)
	{
		flag=1;
		
		for(j=2;j<iary[i];j++)
		{
			if(iary[i]==2)
		 {
		 break;
		 }
		 
		 if(iary[i]%j==0)
		 {
		 flag=0;
		 break;
		 }
		}
		
		 if(flag==1)
 			printf("\n %d is a prime number", iary[i]);
	}
	
 	}
	