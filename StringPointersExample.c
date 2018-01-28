#include<stdio.h>
#include<conio.h>

int main()
{
 char chs[100], *cp;
  cp=chs;
  printf("Enter a string of characters: \n");
  *cp =  getchar();
   
  while(*cp!='\n')
  {
	 cp++;
  	*cp=getchar();
  		
  }
  *cp = '\0';
  printf("\n String is %s \n", chs);
  	
}