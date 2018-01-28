#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,r,c, iary[20][20];
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of columns:");
	scanf("%d", &c);
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element %d of column %d:", i+1, j+1);
		scanf("%d", &iary[i][j]);	
		}
	}
	printf("\n Elements of 2 dimensional array are:\n");
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	  {
		printf("\t %d", iary[i][j]);
	  }	
	  printf("\n");
	}
	
}