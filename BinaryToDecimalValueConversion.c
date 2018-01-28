#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int bin_value,i=0,dec_value=0,bin_digit;
printf("Enter a binary value:");
scanf("%d", &bin_value);
while(bin_value>0)
{
	bin_digit=bin_value%10;
	dec_value= dec_value+pow(2,i)*bin_digit;
	i++;
	bin_value=bin_value/10;
}
printf("\n The equivalent decimal value = %d", dec_value);

}