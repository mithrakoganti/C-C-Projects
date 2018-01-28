#include<stdio.h>
#include<conio.h>

int main()
{
	char chs[100], ch;
	int i=0, len=0;
	printf(" Enter string of characters \\0 at the end: \n");
	ch = scanf(" %c", &chs[0]);
	len+=1;
	while(chs[i]!='\0')
	{
		ch = scanf(" %c", &chs[++i]);
		len+=1;
	}
	for(i=0;i<len;i++)
	{
		printf("\t %c", chs[i]);
	}
	printf("\n");
}