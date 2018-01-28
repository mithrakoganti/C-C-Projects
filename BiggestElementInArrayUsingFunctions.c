#include <stdio.h>
#include<conio.h>

int dispBig(int iary[20], int);

int main()
{
 int n,iary[20],i,big_num;
 printf("Enter number of elements:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
 	printf("Enter element %d:", i+1);
 	scanf("%d", &iary[i]);
 }
 big_num=dispBig(iary, n);
  printf("\n Biggest element in the array = %d", big_num);
 	
}
int dispBig(int iaryx[20], int m)
{
	int i;
int	big_x=0;
	for(i=0;i<m;i++)
	{
	
	if(iaryx[i]>big_x)
	{
	big_x=iaryx[i];	
	}
	
}
	return big_x;
}