#include<stdio.h>
#include<conio.h>

long int power_x(int,int);


int main()
{
int x,y;
long int result;
printf("Enter 'x'(base) value:");
scanf("%d", &x);
printf("Enter 'y' value:");
scanf("%d", &y);
result=power_x(x,y);
printf("\n Result = %ld", result);
}

long int power_x(int x, int y)
{
long int result=1;
int i;
for(i=1;i<=y;i++)
result = result*x;
return result;	
}





