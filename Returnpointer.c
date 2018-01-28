#include<stdio.h>
#include<conio.h>

int *getAddress(int a); //function declaration
 

 
int main()
{
int a=20;
 
int *addr=getAddress(a);
printf("%x %d",addr,*addr);
return 0;
}
int *getAddress(int a)//function definition
{
 
return &a;
 
}