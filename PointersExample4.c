#include<stdio.h>
#include<conio.h>

int main()
{
	int *a, i=10;;
	float *b, f=3.14;;
	char *c, k='a';
	a=&i;
	//a=&f;  An integer pointer can't point to a floating point variable
	printf("\n size of int= %d & size of int pointer= %d", sizeof(i),sizeof(a));
	printf("\n size of float= %d & size of float pointer= %d", sizeof(f),sizeof(b));
	printf("\n size of char= %d & size of char pointer= %d", sizeof(k),sizeof(c));
	
}