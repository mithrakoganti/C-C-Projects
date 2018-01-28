#include<stdio.h>
#include<conio.h>

int main()
{
int n,i=1,sum=0;
printf("Enter an integer:");
scanf("%d", &n);
while(i<n)
{
if(n%i==0)
sum=sum+i;
i++;	
}
printf("%d", sum);
if(sum==n)
printf("\n The entered integer is a perfect number");
else
printf("\n The entered integer is not a perfect number");	
}