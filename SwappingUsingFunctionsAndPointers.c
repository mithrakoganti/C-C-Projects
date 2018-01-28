#include<stdio.h>
#include<conio.h>

void swap(int*,int*);

int main()
{
	int x,y;
	printf("Enter 'x' value:");
	scanf("%d", &x);
	printf("Enter 'y' value:");
	scanf("%d", &y);
	swap(&x,&y);
	printf("\n New values after swapping = %d and %d", x,y);
	
	
}
void swap(int *x, int *y)
{
	int temp;
	temp= *x;
	*x= *y;
	*y=temp;
//	printf("\n Swapped values are : %d and %d", x,y);
	
}