#include<stdio.h>
#include<conio.h>

void myScanf(char[],void *);


int main()
{
	char ch= '12', *cp;
	float fl=3.14, *fp;
	
	int n=5, *ip;
	printf("\n %c", ch);
	printf("\n %d", ch);
	printf(" \n ---------------------------------------------------");
		
/*	printf("Enter number of alphabets:");
	scanf("%d", &n);
	printf("Enter a character:");
	scanf(" %c", &ch); */
	//cp=&n;
	//ip=&ch;
    	cp=&ch;
    	ip=&n;
	printf("\n %x", ip);
	printf("\n %x", cp);
	printf(" \n ---------------------------------------------------");
	
	 myScanf("%d",&n);
	 printf(" \n ---------------------------------------------------");
  	myScanf("%f",&fl);
  	printf(" \n ---------------------------------------------------");
	myScanf(" %c",&ch);
	printf(" \n ---------------------------------------------------");
  	
  	
	
	
}
void myScanf(char chary[],void *p)
{
 	//printf("\n %x", chary);
 	if(sizeof((int*)p)==sizeof(int))
 	{
	printf("\n %x", (int *)p);	
 	printf("\n %d", *((int *)p));
 	}
 	else if(sizeof((float*)p)==sizeof(float))
 	{
	printf("\n %x", (float *)p);
 	printf("\n %f", *((float *)p));
	 }
 	else if(sizeof((char*)p)==sizeof(char))
 	{
 	printf("\n %x", (char *)p);
 	printf("\n %c", *((char *)p));
 	}
 	
	 	
}

