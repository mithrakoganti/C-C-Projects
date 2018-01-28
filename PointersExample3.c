#include<stdio.h>
#include<conio.h>

int main()
{
	int x=10, *p,*q;
	p= &x;
	q=p;
	*q=55;
	*p=66;
	printf("\n %d %d %d", *p, *q, x);
}