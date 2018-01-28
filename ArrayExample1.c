#include <stdio.h>
#include<conio.h>

int main()
{
	int mary[5];
	int total=0,i;
	float average;
	for(i=0;i<5;i++)
	{
		printf("Enter marks of %d:", i+1);
		scanf("%d", &mary[i]);
		total= total+mary[i];
		
	}
	average = (float)(total)/5;
	printf("\n total = %d", total);
	printf("\n average = %f", average);
	
}