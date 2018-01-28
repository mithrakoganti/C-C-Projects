#include<stdio.h>
#include<conio.h>

void addArray(int iary1[20][20],int iary2[20][20], int, int);

int main()
{
	int i,j,r,c, iary1[20][20], iary2[20][20], iary3[20][20];
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
	 addArray(iary1,iary2, r,c);
}
	
void addArray(int iarya[20][20],int iaryb[20][20], int m,int n)
{
	int i,j,iaryc[20][20];
for(i=0;i<m;i++)
	{
      for(j=0;j<n;j++)
      {
      	iaryc[i][j]=iarya[i][j]+iaryb[i][j];
      }
	}
	printf("\n Elements of resultant array are:\n");
	for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	  {
		printf("\t %d", iaryc[i][j]);
	  }	
	  printf("\n");
	}	
}	
