#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int dec_value, bin_digit, bin_value=0,i=0;
printf("Enter an integer:");
scanf("%d", &dec_value);
while(dec_value>0)
{
 bin_digit=dec_value%2;
 printf("\n bin_digit = %d", bin_digit);
 bin_value=bin_value+bin_digit*pow(10,i);
  printf("\n bin_value = %d", bin_value);
 i++;
 dec_value=dec_value/2;
	
}
printf("\n %d", bin_value);

}