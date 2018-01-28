#include<stdio.h>
#include<conio.h>

int main()
{
	char chary[25], *ap;
	
	int n,i;
	printf("Enter number of alphabets:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter aplhabet %d: ",i+1);
		scanf(" %c", &chary[i]);
	}
	ap=&chary[0];
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
	printf("\n The alphabets after converting to opposite case are:");
	
	for(i=0;i<n;i++)
	{
		printf("\n  %c",ap[i]);
	
	}
	getch();
	
}