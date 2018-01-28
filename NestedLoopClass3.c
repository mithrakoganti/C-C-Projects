/* 1 2 3 4 5
  6 7 8 9 10
  11 12 13 14 15
  
  */
  
  
  #include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,x;
	printf("Enter n value:");
	scanf("%d", &n);
	for(i=x=1;i<=n;i++)
	{
		for(j=x;j<=x+5-1;j++)
		{
		printf("\t %d", j);	
		}
		x=j;
		
		printf("\n");
	}
	
}