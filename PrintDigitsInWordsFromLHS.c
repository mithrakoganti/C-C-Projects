//Print digits in a number in words from LHS

#include<stdio.h>
#include<conio.h>

int main()
{
int n,p=1, digit;
printf("Enter an integer:");
scanf("%d", &n);
while(n/p>9)
{
	p=p*10;	
}
while(p>0)
{
	digit=n/p;
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

	
	n=n%p;
	p=p/10;
}

		}
	
