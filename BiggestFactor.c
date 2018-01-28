//finding biggest factor of an integer 'n excluding itself

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i;
	printf("Enter an integer:");
	scanf("%d", &n);
	i=n/2;
	while(i>0)
	{
		if(n%i==0)
		break;
		i--;
		
	}
	printf("%d is the biggest factors of %d", i , n);
}