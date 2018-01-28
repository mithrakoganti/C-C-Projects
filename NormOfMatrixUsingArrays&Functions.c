#include<stdio.h>
#include<conio.h>
#include<math.h>

void normMatrix(int iary[20][20], int,int);

int main()
{
	int i,j,r,c, iary[20][20];
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
	normMatrix(iary,r,c);
}
	
	void normMatrix(int iarya[20][20], int m,int n)
	{
	int i,j,sum=0;
	float norm;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		sum=sum+iarya[i][j]*iarya[i][j]; 	
		}
	}
	
	norm=sqrt(sum);
	printf("\n Norm of the matrix = %f", norm);
	}
