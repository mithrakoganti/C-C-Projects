//Print digits in a number in words

#include<stdio.h>
#include<conio.h>

int main()
{
int n, digit;
printf("Enter an integer:");
scanf("%d", &n);
while(n>0)
{
	digit=n%10;
	n=n/10;
	switch (digit)
	{
		case 0: printf("\t Zero");
		break;
		case 1: printf("\t One");
		break;
		case 2: printf("\t Two");
		break;
		case 3: printf("\t Three");
		break;
		case 4: printf("\t Four");
		break;
		case 5: printf("\t Five");
		break;
		case 6: printf("\t Six");
		break;
		case 7: printf("\t Seven");
		break;
		case 8: printf("\t Eight");
		break;
		default: printf("\t Nine");
		break;	
	}

	}
	
}