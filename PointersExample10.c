#include<stdio.h>
#include<conio.h>

int *returnPoint(int);

int main()
{
	int a=10;
	//printf("\n Address 1 = %d",returnPoint(a));
	//printf("\n Value 1 = %d",*returnPoint(a));
	int *p=&a;
	printf("\n %x %d",p,*p);// 60ff34 10
	int *ptr = returnPoint(a);
	printf("\n %x %d",ptr,*ptr);// 60ff00 10
	//printf("\n Address 2 = %d Value 2 = %d",ptr, *ptr);
	
}

int *returnPoint(int b)
{
	
	return &b;
	
}