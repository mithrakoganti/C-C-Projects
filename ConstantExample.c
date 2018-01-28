#include<stdio.h>
#include<conio.h>

int main()
{
	const float tax_rate = 5;
	float profit, salary, tax;
	printf("Enter salary of the person:");
	scanf("%f", &salary);
	tax = ((tax_rate)*salary)/100;
	profit = salary - tax;
	printf("\n profit = %f \n", profit);
	printf("\n tax = %f \n", tax);
	
	
}