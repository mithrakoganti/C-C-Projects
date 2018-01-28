#include<stdio.h>
#include<conio.h>

void recurDisplay(int);

int main()
{
	
  recurDisplay(0);
  printf("\n End of the program \n");
  	
}
void recurDisplay(int x)
{
 if(x>9)
 	return;
 printf	("\n %d", x);
 recurDisplay(x+1);
}
