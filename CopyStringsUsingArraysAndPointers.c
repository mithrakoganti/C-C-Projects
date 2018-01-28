#include<stdio.h>
#include<conio.h>
#include<string.h>

void str_Copy(char chary1[], char charyr[]);
void strptr_Copy(char *, char *);
void strptrx_Copy(char *, char *);

int main()
{
	char chary1[100], charyr[100];
	printf("Enter a string of characters:");
	gets(chary1);
	str_Copy(chary1, charyr);
	printf("\n Resultant array after copying the characters is: %s \n ", charyr);
	strptr_Copy(chary1, charyr);
	printf("\n Resultant array after copying the characters is: %s \n ", charyr);
	strptrx_Copy(chary1, charyr);
	printf("\n Resultant array after copying the characters is: %s \n ", charyr);
	printf("\n Size of charyr is: %d \n ", strlen(charyr));
}

void str_Copy(char charyx[], char charyr[])
{
	int i;	
	for(i=0;charyx[i]!='\0';i++)
	{
		charyr[i]=charyx[i];
	}
	charyr[i] = '\0';

}

void strptr_Copy(char *ap1, char *apr)
{
	while(*ap1!='\0')
	{
	*apr=*ap1;
	ap1++;
	apr++;
	}
	*apr = '\0';
}

void strptrx_Copy(char *ap1, char *apr)
{
	while(*apr++ = *ap1++);	// Post increment operator so initially points to the first character.

}