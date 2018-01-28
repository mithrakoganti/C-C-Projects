#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,r1,c1,r2,c2, iary[20][20],iaryt[20][20];
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
	c2=r1;
	r2=c1;
	for(i=0;i<r2;i++)
	{
	  for(j=0;j<c2;j++)
	  {
	  	
		iaryt[i][j]=iary[j][i];
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
	
	
}