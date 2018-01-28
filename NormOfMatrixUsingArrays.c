#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,r,c, iary[20][20];
	int sum=0;
	float norm;
	printf("Enter number of rows in array:");
	scanf("%d",&r);
	printf("Enter number of columns in array:");
	scanf("%d", &c);
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element %d of column %d:", i+1, j+1);
		scanf("%d", &iary[i][j]);	
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		sum=sum+iary[i][j]*iary[i][j]; 	
		}
	}
	norm=sqrt(sum);
	printf("\n Norm of the matrix = %f", norm);
	
}