#include<stdio.h>
#include<conio.h>
int main()
{
	int size, prec;
	float number;
	printf("Enter the size:");
	scanf("%d", &size);
	printf("Enter the number:");
	scanf("%f", &number);
	printf("Enter the precision:");
	scanf("%f", &prec);
	
	//printf("Enter the starting point:");
//	scanf("%d", &strt_point);
		printf("\n %f", number);
		printf("\n %10f", number);
		printf("\n %*f", size, number);
		printf("\n %10.3f", number);
		printf("\n %*.3f", size, number);
		printf("\n %10.*f", prec, number);
		printf("\n %*.*f", size, prec, number);
		
}
		