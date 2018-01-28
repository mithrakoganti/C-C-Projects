#include <stdio.h>
#include<conio.h>

void display(int iary[20], int);

int main()
{
 int n,iary[20],i;
 printf("Enter number of elements:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
 	printf("Enter element %d:", i+1);
	scanf("%d", &iary[i]);
 }
 display(iary, n);
}
 
 void display(int iaryx[20],int m)
 {
 	int i;
 	for(i=0;i<m;i++)
 	{
 	printf("\n %d ", iaryx[i]);
 	}
 }
 
 