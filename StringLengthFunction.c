#include<stdio.h>
#include<conio.h>

int myStrlen(char*);
int myStrlenx(char chary[]);

int main()
{
	int len;
	char chary[] = "Welcome to my prog";
	len = myStrlen(chary);
	printf("\n String length of the given array is: %d \n", len);
	len = myStrlenx(chary);
	printf("\n String length of the given array x is: %d \n", len);
	printf("\n String is: %s \n", chary);
	
	
}
int myStrlen(char *cp)
{
	
	int  len=0;
	while(*cp!='\0')
	{
	  len += 1;
	  cp++;	
	}
	return len;
}

int myStrlenx(char charyx[])
{
	
	int i=0, len=0;
	while(charyx[i]!='\0')
	{
	  len += 1;
	  i++;	
	}
	return len;
}
