//Hexadecimal value of given decimal value

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int dec_value, hexa_dec_value=0, hexa_dec_digit;
	printf("Enter a decimal value:");
	scanf("%d", &dec_value);
	while(dec_value>0)
	{
	hexa_dec_digit=	dec_value%16;
	hexa_dec_value = hexa_dec_value*100+hexa_dec_digit;
	dec_value=dec_value/16;
	}
//	printf("Output is %d", hexa_dec_value);

while(hexa_dec_value>0)
{
	hexa_dec_digit = hexa_dec_value%100;
	if(hexa_dec_digit < 10)
	{
		printf("%d", hexa_dec_digit);
		
	}
	else
	{
	   switch(hexa_dec_digit)
	   {
   		case 10:printf("A");
   		        break;
     	case 11:printf("B");
   		        break;
   	 	case 12:printf("C");
   		        break;
      	case 13:printf("D");
   		        break;
       	case 14:printf("E");
   		        break;
        case 15:printf("F");
   		        break;
   		        
    	}
	
		
	}
	hexa_dec_value/=100;
}
}