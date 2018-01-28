#include<stdio.h>
#include<conio.h>

void multiply5(int (*ap)[3], int,int);


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
 multiply5(iary, r,c);
  printf("\n Elements of new two dimensional array are:\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
 		printf("\t %d",iary[i][j] );
	 	
 	}
 	printf("\n");	
 }
}



void multiply5(int (*ap)[3], int p, int q)
 {
 	int i,j;
 for(i=0;i<p;i++)
 {
 	for(j=0;j<q;j++)
 	{
 		ap[i][j]= *(*(ap+i)+j)*5;	
	 	
 	}
	 
 }
 }