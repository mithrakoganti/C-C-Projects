#include<stdio.h>
#include<conio.h>

int main()
{
	int x=10,y=20, *p;
	p= &x;
	*p=30;
	p=&y;
	*p=40;
	printf("\n %d %d %d", *p, x,y);
	
}