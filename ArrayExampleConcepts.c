#include<stdio.h>
#include<conio.h>

int main()
{
	int m1,m2,m3,m4,m5,m6,total;
	float average;
	printf("Enter marks in subject 1:");
	scanf("%d", &m1);
	printf("Enter marks in subject 2:");
	scanf("%d", &m2);
	printf("Enter marks in subject 3:");
	scanf("%d", &m3);
	printf("Enter marks in subject 4:");
	scanf("%d", &m4);
	printf("Enter marks in subject 5:");
	scanf("%d", &m5);
	printf("Enter marks in subject 6:");
	scanf("%d", &m6);
	
	total= m1+m2+m3+m4+m5+m6;
	average=(float)(total)/6;
	printf("\n Total marks in all the subjects = %d", total);
	printf("\n Average = %f ", average);
	
	
}