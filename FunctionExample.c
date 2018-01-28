#include <stdio.h>
#include<conio.h>

int x;

void printBig(int x, int y)
{ 
	if(x>y)
	printf("\n %d is the biggest integer", x);
	else
	printf("\n %d is the biggest integer", y);
	
	
}

int findSmall(int x, int y)
{
	int result;
	if(x<y)
	result = x;
	else
	result = y;
	return result;
	
}

int main()
{
	
	int a,b, small;
	printf("\n Enter 'a' value:");
	scanf("%d", &a);
	printf("\n Enter 'b' value:");
	scanf("%d", &b);
	printBig(a,b);
	small=findSmall(a,b);
	printf("\n Smallest integer = %d", small);
	
	
}
