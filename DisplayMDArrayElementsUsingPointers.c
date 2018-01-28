#include<stdio.h>
#include<conio.h>


int main()
{
 int r,c,i,j,iary[3][3];
 printf("Enter number of rows:");
 scanf("%d", &r);
 printf("Enter number of columns:");
 scanf("%d", &c);
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
	 	printf("Enter element %d of column %d:",i+1,j+1);
	 	scanf("%d", &iary[i][j]);	
 	}
 }
 printf("\n Elements of two dimensional array are:\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
	 	printf("\t %d",*(*(iary+i)+j) );
 	}
 	printf("\n");
	 
 }
  printf("\n Addresses of two dimensional array are:\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
	 	printf("\t %d",(*(iary+i)+j) );
 	}
 	printf("\n");
	 
 }
 
 	
}