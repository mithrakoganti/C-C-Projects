#include<stdio.h>
#include<conio.h>

int main()
{
	int x[]={2,3,5,7,9}, *p;
	p=&x[0];
	printf("\n Address=%x value=%d",p,*p);
//	p++;
	//printf("\n Address=%x value=%d",++p,*++p);
	
	printf("\n Address=%x value=%d",p++,*p++);
	printf("\n Address=%x value=%d",p++,(*p)++);
	printf("\n Address=%x value=%d",p++,*(p++));
	printf("\n  value=%d",*p); 
}