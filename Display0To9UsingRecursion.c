#include<stdio.h>
#include<conio.h>

void recurDisplay(int);

int main()
{
	
  recurDisplay(9);
  printf("\n End of the program \n");
  	
}
void recurDisplay(int x)
{
 if(x<1)
 	return;
 printf	("\n %d", x);
 recurDisplay(x-1);
}