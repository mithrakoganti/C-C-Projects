#include<stdio.h>
#include<conio.h>
int main()
{
	int x=10,y=20, *p,*q;
	p=&x;
	q=&y;
	*p=*p+*q;
	*q=*p+*q;
	printf("\n %d %d", x,y);
}