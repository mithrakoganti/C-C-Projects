#include<stdio.h>
#include<conio.h>
int main()
{
	int i=10;
	float f= 2.345;
	double d= 3.1234;
	void *vpt;
	i=(int)d;
	//d=i;
	vpt =&i;
	printf("\n i=%d",*((int *)vpt));
	vpt = &f;
	printf("\n f= %f", *((float *)vpt));
	
}