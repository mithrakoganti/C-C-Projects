#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int sortAsc(int *, int);
//int sortDesc(int *, int);

int main()
{
	int n,i, *vector;
	printf("Enter number of elements:");
	scanf("%d", &n);
	vector = (int*)malloc(n*sizeof(int));
	
	if(vector==NULL)
	 {
 		printf("No memory available");
 	 	exit(1);
 	 }
	 printf("Enter the elements:\n");
	 for(i=0;i<n;i++)
 {
 	printf("\n Enter element %d:",i+1);
 	scanf("%d",vector+i);
 }
	printf("\n Elements list before soting is:\n");
 	for(i=0;i<n;i++)
 	{
 	printf("\t %d",vector[i]);	
	}
	sortAsc(vector, n);
	printf("\n Elements list after soting is:\n");
 	for(i=0;i<n;i++)
 	{
 	printf("\t %d",vector[i]);	
	}
	printf("\n Reallocating n more values:");
	vector = (int*)realloc(vector, (2*n)*sizeof(int));
	printf("\n Enter the additional integer elements\n");
	for(i=n;i<(2*n);i++)
	{
		printf("\n Enter element %d:", i+1);
		scanf("%d",vector+i);
	}
	
	printf("\n Elements list before soRting is:\n");
 	for(i=0;i<(2*n);i++)
 	{
 	printf("\t %d",vector[i]);	
	}
	sortAsc(vector, 2*n);
	printf("\n Elements list after soting is:\n");
 	for(i=0;i<(2*n);i++)
 	{
 	printf("\t %d",vector[i]);	
	}
	printf("\n Reallocating the vector:");
	vector = (int*)realloc(vector, (n)*sizeof(int));
	for(i=0;i<(n);i++)
 	{
 	printf("\t %d",vector[i]);
 	}
	
}

int sortAsc(int  *ap, int m)
{
	int i,j,temp;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
		if(*(ap+i)>*(ap+j))
		{
			temp=*(ap+i);
			*(ap+i)=*(ap+j);
			*(ap+j)=temp;
		}
		}	
		
	}

}

