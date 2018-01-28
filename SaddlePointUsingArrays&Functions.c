#include<stdio.h>
#include<conio.h>

int main()
{
	int r,c,i, j,k,min,max, iary[20][20];
	int p,q,flag=1;
	printf("Enter number of rows in array:");
	scanf("%d",&r);
	printf("Enter number of columns in array:");
	scanf("%d", &c);
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element %d of row %d:", i+1, j+1);
		scanf("%d", &iary[i][j]);	
		}
	}
	for(i=0;i<r;i++)
	{	
		min=iary[i][0];
		p=i;
		q=0;
		for(j=0;j<c;j++)
		{
		 	if(iary[i][j]<min)
		 	{
		 	min=iary[i][j];
		 	p=i;
		 	q=j;
		 	}
		}
		max=iary[p][q];
		for(k=0;k<r;k++)
		{
			if(k!=q)
			{
				if(iary[k][q]>max)
				{
				max=iary[k][q];
				flag=0;
				}
			}
		}
		if(flag==1)
			printf("\n Saddle point iary[%d][%d]=%d", p+1,q+1,iary[p][q]);
		else
			printf("\n No Saddle point in the row %d", i+1);
		
		
		flag=1;
		
	}

	
	}
	
	