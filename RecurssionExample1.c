#include<stdio.h>
#include<conio.h>

void recurDisplay(int);

int main()
{
	recurDisplay(1);
}
void recurDisplay(int x)
{
	if(x>3)
	return;
	printf("\t %d",x);
	recurDisplay(x+1);
	printf("\t %d",x);
	
	
}