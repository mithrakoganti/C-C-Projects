#include<stdio.h>
#include<conio.h>

int str_compare(char *, char *);

int main()
{
	char chary1[100], chary2[100];
	int flag;
 	printf("Enter first string:");
 	gets(chary1);
 	printf("Enter second string:");
 	gets(chary2);
 	flag=str_compare(chary1,chary2);
 	if(flag==1)
	 {
	 printf("Both the strings are Equal");
	 }
 	else
 	printf("Both the strings are not equal");
	
}
int str_compare(char *cp1, char *cp2)
{
	int flag=1, i,j;
	for(i=0,j=0;(cp1[i]!='\0')&&(cp2[j]!='\0');i++,j++)
	{
	if(cp1[i]!=cp2[j])
	{
		flag=0;
		break;
	}
	}
	return flag;
}