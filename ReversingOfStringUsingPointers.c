#include<stdio.h>
#include<conio.h>
#include<string.h>

void strRev(char*);

int main()
{
 char chary[100];
 printf("Enter string of characters:");
 gets(chary);
 strRev(chary); 	
}

void strRev(char *cp)
{
	int i;
	//while(*cp != '\0'); // for(i=0;cp[i]!='\0';i++){ }
	//while(*cp-- )
	for(i=0;cp[i]!='\0';i++);
	for(;i>=0;i--)
	{
		printf("%c", cp[i]);
		
	}
	
		
}