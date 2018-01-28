#include<stdio.h>
#include<conio.h>
int main()
{
	int size, number,strt_point;
	printf("Enter the size:");
	scanf("%d", &size);
	printf("Enter the number:");
	scanf("%d", &number);
	printf("Enter the starting point:");
	scanf("%d", &strt_point);
		printf("\n %*d", size, number);
}