#include<stdio.h>
#include<conio.h>

int matrixSymmetry(int iary[20][20],int,int);

int main()
{
	int i,j,r1,c1, iary[20][20],flag;
	printf("Enter number of rows in array:");
	scanf("%d",&r1);
	printf("Enter number of columns in array:");
	scanf("%d", &c1);
		
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		printf("Enter element %d of row %d:", i+1, j+1);
		scanf("%d", &iary[i][j]);	
		}
	}
	flag = matrixSymmetry(iary,r1,c1);
	if(flag==1)
	printf("\n The matrix is symmetrical");
	else
	printf("\n The matrix is not symmetrical");
}
	
	int matrixSymmetry(int iaryx[20][20], int rx,int cx)
	{
		int i,j,r2, c2, iaryt[20][20], flag=1; 
	c2=rx;
	r2=cx;
	for(i=0;i<r2;i++)
	{
	  for(j=0;j<c2;j++)
	  {
	  	
		iaryt[i][j]=iaryx[j][i];
	  }	
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			if(iaryt[i][j]!=iaryx[i][j])
			flag=0;
			break;
		}
	}	

	printf("\n Elements of matrix after transposing are:\n");
	for(i=0;i<r2;i++)
	{
	  for(j=0;j<c2;j++)
	  {
		printf("\t %d", iaryt[i][j]);
	  }	
	  printf("\n");
	}
	return flag;
	}
	
