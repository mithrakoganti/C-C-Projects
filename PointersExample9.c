#include<stdio.h>
#include<conio.h>

int main()
{
	int x[]= {2,3,5,7,9};
	int *p;
    p= &x[0];
	p= p+2;
	printf("\n value= %d",*p);
}