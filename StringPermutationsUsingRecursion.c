#include<stdio.h>
#include<conio.h>
#include<string.h>

void str_Permutation(char *, int, int);
void swap(char*, char*);

int len;

int main()
{
	char chary[100];
	printf("Enter a string of characters:");
	gets(chary);
	len=strlen(chary);
	str_Permutation(chary, 0, len-1);
	
	
	
	
}
void str_Permutation(char *cp, int sn, int en)
{
	int i;
	if(sn==en)
		printf("%s \n", cp);
	else
	{
	for(i=sn;i<=en;i++)
	{
		swap((cp+sn), (cp+i));
		str_Permutation(cp, sn+1, en);
		swap((cp+sn),(cp+i));
	}
	}
	
	
		
}
void swap(char *cp1, char *cp2)
{
	char temp;
	temp=*cp1;
	*cp1=*cp2;
	*cp2=temp;
}