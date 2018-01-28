#include<stdio.h>
#include<conio.h>

int sortAsc(int *ap, int);

int main()
{
	int n,i, iary[20], *ap;
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	sortAsc(&iary[0], n);
	printf("\n New elements after performing ascending operation are:");
	for(i=0;i<n;i++)
	{
	 printf("\t %d",iary[i]);
	}
	
}

int sortAsc(int *ap, int m)
{
	int i,j,temp;

	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
		if(ap[i]>ap[j])
		{
			temp=ap[i];
			ap[i]=ap[j];
   			ap[j]=temp;
		}
		}
	}	
		
	
}

