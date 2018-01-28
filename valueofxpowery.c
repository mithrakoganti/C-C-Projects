//value of x^y for given x and y values

#include<stdio.h>
#include<conio.h>
int main()
{
	
	int x,y, result=1, i=0;
	printf("Enter x and y values:");
	scanf("%d %d", &x, &y);
	while(i<y)
	{
		result = result*x;
		i++;
	}
	printf("\n Result = %d", result);
	
}