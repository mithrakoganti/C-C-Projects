#include<stdio.h>
#include<conio.h>

long int strPermutation(char *);


int main()
{
	char chary[100];
	long int result;
	printf("Enter a string of characters:");
	gets(chary);
	result=strPermutation(chary);
	printf("\n Number of permutations = %ld", result);
	
}
long int strPermutation(char *cp)
{
	int count,i;
	long int result=1;
	for(i=0;cp[i]!='\0';i++)
	{
	count++;
	}
	while(count>1)
	{
	result= result*(count-1);
	count--;
	}
	return result;
	
	
}