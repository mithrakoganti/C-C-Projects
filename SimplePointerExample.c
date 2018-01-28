#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10,b=20, *p, *q;
	p=&a;
	q=&b;
	printf("\n p= %d", p);
	p=p+a;
		printf("\n p= %d", p);
}