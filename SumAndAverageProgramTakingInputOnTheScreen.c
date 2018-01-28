#include<stdio.h>
#include<conio.h>

int main()
{
	int mk, num=0;
	float sum=0, average;
	printf("Enter marks one by one, -1 at the end:");
	
	scanf("%d", &mk);
	while(mk!=-1)
	{
	 sum = sum+mk;
	 num++;	
 	 scanf("%d", &mk);
	}
	average = sum/num;
	printf("\n Sum= %f and Average = %f", sum, average);
}