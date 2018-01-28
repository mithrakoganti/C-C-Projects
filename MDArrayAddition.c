#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,r,c, iary1[20][20], iary2[20][20],iary3[20][20];
	printf("Enter number of rows in array:");
	scanf("%d",&r);
	printf("Enter number of columns in array:");
	scanf("%d", &c);
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element %d of column %d:", i+1, j+1);
		scanf("%d", &iary1[i][j]);	
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element %d of column %d:", i+1, j+1);
		scanf("%d", &iary2[i][j]);	
		}
	}
	for(i=0;i<r;i++)
	{
      for(j=0;j<c;j++)
      {
      	iary3[i][j]=iary1[i][j]+iary2[i][j];
      }
	}
	
	printf("\n Elements of resultant array are:\n");
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	  {
		printf("\t %d", iary3[i][j]);
	  }	
	  printf("\n");
	}
	
}