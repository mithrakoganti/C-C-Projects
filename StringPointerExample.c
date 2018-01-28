#include<stdio.h>
#include<conio.h>

int main()
{
 char chs[100], *cp;
  cp=chs;
  printf("Enter a string of characters: \n");
   
  while((*cp++ = getchar())!='\n');
  
  *--cp = '\0';
  printf("\n String is %s \n", chs);
  	
}