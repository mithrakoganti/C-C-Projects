#include<stdio.h>
#include<conio.h>
#include<string.h>

void printString1(char*);
void printString2(char*);

int main()
{
	int i;
	char chary[]= {'a', 'e', 'i', 'o', 'u'};
	char chs[]= "1 2 3";
	char str[]="The C Prog";
	char ch='\0';
	printf("\n The null character =%c \n", ch);
	printf("\n chary size = %d", sizeof(chary));
	printf("\n chary size = %d", strlen(chary));
	printf("\n chs size = %d", sizeof(chs));
	printf("\n chs size = %d", strlen(chs));
	printf("\n str size = %d", sizeof(str));
	printf("\n str size = %d", strlen(str));
	for(i=0;i<sizeof(chs);i++)
 		printf(" \t %c",chs[i] );
 	printf("Y");
	printf("\n");
	
	for(i=0;i<strlen(chs);i++)
 		printf(" \t %c",chs[i] );																													
 	printf("Y");
	printf("\n");
 		
	printString1(chary);
	printString2(chs);
	

}
void printString1(char *sp)
{
	int i;
	for(i=0;i<5;i++,sp++)
	
 		printf(" \t %c",*sp );
	printf("\n");
		
}
void printString2(char *sp)
{
	int i;
	for(i=0;i<strlen(sp);i++)
 		printf(" \t %c",sp[i] );
	printf("Y");
 
 	printf("\n");
}