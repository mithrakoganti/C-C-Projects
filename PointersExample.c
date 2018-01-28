#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	int *p;
	p=&n;
	printf("Enter an integer:"); //n=5;
	scanf("%d", &n); 
	printf("\n %d",n); // 5;
	printf("\n %d",*p);//5;
	printf("\n %d",p);//6356788
}