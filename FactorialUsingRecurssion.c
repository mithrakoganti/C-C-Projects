#include<stdio.h>
#include<conio.h>

long int recurFact(int);


int main()
{
 int n;
 long int fact;
printf("Enter an integer:");
 scanf("%d", &n);
fact = recurFact(n);
 printf("\n %ld", fact);	

}

long int recurFact(int x)
{
  if(x==1)
  {
  	return 1;
  }
  else
  {
  	return (x*recurFact(x-1));	
  }
}
  
 
 