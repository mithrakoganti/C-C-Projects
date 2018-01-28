#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,y,result;
	printf("Enter X and Y values:");
	scanf("%d %d",&x,&y);
	result = pow(x,y);
	printf("%d raised to the power %d=%d",x,y,result );
}