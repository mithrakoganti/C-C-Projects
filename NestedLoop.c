#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1,j,p, q;
	printf("Enter the number of rows:");
	scanf("%d", &p);
	printf("Enter the number of columns:");
	scanf("%d", &q);
	while(i<=p)
	{
	for(j=1;j<=q;j++)

	{
		printf("\t %d", j);

	}
		printf("\n");
		i++;
	}
	
}