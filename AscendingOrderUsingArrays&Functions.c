#include<stdio.h>
#include<conio.h>

int sortAsc(int iary[20], int);
int sortDesc(int iary[20], int);

int main()
{
	int n,i, iary[20];
	printf("Enter number of elements:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:", i+1);
		scanf("%d", &iary[i]);
	}
	sortAsc(iary, n);
	
}

int sortAsc(int iaryx[20], int m)
{
	int i,j,temp;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
		if(iaryx[i]>iaryx[j])
		{
			temp=iaryx[i];
			iaryx[i]=iaryx[j];
			iaryx[j]=temp;
		}
		}	
		
	}
		printf("\n New elements after performing ascending operation are:");
	for(i=0;i<m;i++)
	{
	 printf("\t %d",iaryx[i]);
	}
}

