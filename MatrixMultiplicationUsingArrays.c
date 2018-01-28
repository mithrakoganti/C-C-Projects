#include<stdio.h>
#include<conio.h>

int main()
{

	int i,j,k,r1,c1,r2,c2, iary1[20][20],iary2[20][20], iaryr[20][20],sum=0;
	printf("Enter number of rows in array 1:");
	scanf("%d",&r1);
	printf("Enter number of columns in array 1:");
	scanf("%d",&c1);	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		printf("Enter element %d of row %d of matrix 1:", i+1, j+1);
		scanf("%d", &iary1[i][j]);	
		}
	}
	
	printf("Enter number of rows in array 2:");
	scanf("%d",&r2);
	printf("Enter number of columns in array 2:");
	scanf("%d",&c2);
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		printf("Enter element %d of row %d of matrix 2:", i+1, j+1);
		scanf("%d", &iary2[i][j]);	
		}
	}
	if(c1!=r2)
	printf("\n Matrix Multiplication is not possible");
	else
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
			{
				sum=sum+iary1[i][k]*iary2[k][j];
			}
			iaryr[i][j]=sum;
			sum=0;
		}
	}
	printf("\n The resultant matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t %d", iaryr[i][j]);
		}
		printf("\n");
	}
}
	
	
	
	
	
		