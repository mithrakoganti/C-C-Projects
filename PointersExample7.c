#include<stdio.h>
#include<conio.h>

int main()
{
	int *p;
	long int li=99999999;
	p= &li;
	printf("\n li= %ld",li);
	printf("\n li= %ld",*p);
}