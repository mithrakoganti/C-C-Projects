#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j, iary [][3]= {{1,2,3},{4,5,6},{7,8,9}};
	printf("\n Elements of 2 dimensional array are:\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
		printf("\t %d", iary[i][j]);
	  }	
	  printf("\n");
	}
	
}