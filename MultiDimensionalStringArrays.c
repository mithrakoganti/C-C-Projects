#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[10][25];
	int i,n;
	printf("Enter the number of strings:");
	scanf("%d", &n);
	printf("\n Enter %d strings one by one:", n);
	for(i=0;i<n;i++)
	{
	
	 scanf("%s", &str[i]);
	}
	printf("\n Strings are:\n");
	for(i=0;i<n;i++)
	{
	   puts(str[i]);
	   printf("\n");
	}
	
}
