//GCD of two integers

#include<stdio.h>
#include<conio.h>

int gcd(int,int);

int main()
{
int x,y, divisor;
printf("Enter x value:");
scanf("%d", &x);
printf("Enter y value(y>x):");
scanf("%d", &y);
divisor = gcd(x,y);
printf("\n %d is the greatest common divisor of %d and %d",divisor, x,y);	

}


int gcd(int p,int q)
{	
	if(q%p==0)
	return p;
	else
	{
		return gcd(q%p,p);
	}
	//printf("\n %d is the greatest common divisor of %d and %d", p, temp2, temp1);
    //break;
	
		
}
