#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,temp;
	int *p,*q;
	printf("Enter 'x' value:");
	scanf("%d", &x);
	printf("Enter 'y' value:");
	scanf("%d", &y);
	p=&x;
	q=&y;
    temp=*p;
    *p=*q;
    *q=temp;
	
		printf("\n New values after swapping = %d and %d", x,y);
	
}