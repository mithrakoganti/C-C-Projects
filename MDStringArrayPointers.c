#include<stdio.h>
#include<conio.h>
#include<string.h>
int n,i;

void printStrings(char **sp)
{
	printf("\n Strings are:\n");
 for(i=0;i<n;i++)
	{
		sp[i] = *(sp+i); 
	 printf(" %s \n ",sp[i]);
	}	
	
}

int main()
{
	char str[10][25];
	printf("Enter the number of strings:");
	scanf("%d", &n);
	
	printf("\n Enter %d strings one by one:", n);
	 for(i=0;i<n;i++)
		{
		 scanf(" %s",str[i]);
		}	
		
	printStrings(str);
		
	
}
