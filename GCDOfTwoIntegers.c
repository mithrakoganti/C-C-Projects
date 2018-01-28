//GCD of two integers

#include<stdio.h>
#include<conio.h>

int main()
{
int x,y, remainder,temp1,temp2;
printf("Enter x value:");
scanf("%d", &x);
printf("Enter y value(y>x):");
scanf("%d", &y);
temp1=y;
temp2=x;
while(x>0)
{
	remainder=y%x;
	y=x;
	x=remainder;
	
	//printf("\n %d is the greatest common divisor of %d and %d", x, temp2, temp1);
    //break;
	if(x==0)
	printf("\n %d is the greatest common divisor of %d and %d",y , temp2, temp1);	
}	
}