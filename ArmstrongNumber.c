#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int n, count=0,digit,temp,sum=1;
 printf("Enter an integer:");
 scanf("%d", &n);
 temp=n;
 while(n>0)
 {
  digit=n%10;
  count++;
  n=n/10;
 }
printf("\n %d", count);
n=temp;
while(n>0)
{
digit=n%10;
sum=sum+pow(digit,count);
n=n/10;	
}
printf("\n %d",sum);
if(sum==temp)
printf("The given number is an Armstrong number");
else
printf("The given number is  not an Armstrong number");	

}