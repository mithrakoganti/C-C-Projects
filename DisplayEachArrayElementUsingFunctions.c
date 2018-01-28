#include<stdio.h>
#include<conio.h>

void display(int);

int main()
{
int n,i, iary[25];
printf("Enter number of elements:");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf(" Enter element %d:", i+1);
scanf("%d", &iary[i]);
}
for(i=0;i<n;i++)
{
	display(iary[i]);
}
}

void display(int x)
{
 printf("\n %d", x);
}