#include <stdio.h>
#include<conio.h>

int dispSmall(int iary[20], int);

int main()
{
 int n,iary[20],i,small_num;
 printf("Enter number of elements:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
 	printf("Enter element %d:", i+1);
 	scanf("%d", &iary[i]);
 }
 small_num=dispSmall(iary, n);
  printf("\n Smallest element in the array = %d", small_num);
 	
}
int dispSmall(int iaryx[20], int m)
{
	int i;
	int	small_x = iaryx[0];
	for(i=1;i<m;i++)
	{
	
	if(iaryx[i]<small_x)
	{
	small_x=iaryx[i];	
	}
	
}
	return small_x;
}