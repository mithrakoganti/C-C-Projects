#include<stdio.h>
#include<conio.h>

void convertCase(char *ap, int);

int main()
{
	char chary[25];
	int n,i;
	printf("Enter number of alphabets:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter aplhabet %d: ",i+1);
		scanf(" %c", &chary[i]);
	}
	  convertCase(chary,n);
	  printf("\n The alphabets after converting to opposite case are:");
	
	for(i=0;i<n;i++)
	{
		printf("\n  %c",chary[i]);
	
	}
}
void convertCase(char *ap, int n)
{
 char charyx[25];
 	int i;
	//ap=&chary[0];
	for(i=0;i<n;i++)
	{
		if(ap[i]>='A'&&ap[i]<='Z' )
		{
			ap[i]=ap[i]+32;
		}
		else
		{
			ap[i]=ap[i]-32;
		}
	}
	

	
}