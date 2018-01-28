#include<stdio.h>
#include<conio.h>

void myScanf(char[],void *);


int main()
{
	float fl=3.14, *fp;
	fp=&fl;
  	myScanf("%f",&fl);
  	printf(" \n ---------------------------------------------------");	
	printf("\n %x", fp);
 	printf("\n %f", *fp);
}
void myScanf(char chary[],void *p)
{
	printf("\n %x", (float *)p);
 	printf("\n %f", *(float *)p);
	 	
}

