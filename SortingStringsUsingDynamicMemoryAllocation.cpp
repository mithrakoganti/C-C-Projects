#include<stdio.h>
#include<conio.h>
#include<string.h>

void sortStrings(char **, int); 

int main()
{ 
	int n,i;
	printf("\n Enter number of strings:");
	scanf("%d", &n);
    char **vector = (char**)malloc(n*sizeof(char*));
    
    printf("\n Enter %d strings one by one:", n);
	 for(i=0;i<n;i++)
		{
			vector[i]=(char*)malloc(25);
		printf("\n Enter string %d:",i+1);
		 scanf(" %s", (vector[i]));
		}	
    
	printf("\n String list before soting is:\n");
 	for(i=0;i<n;i++)
 	{
 	printf("\t %s",*(vector+i));	
	}
	sortStrings(vector, n);
	printf("\n String list after sorting is:\n");
 	for(i=0;i<n;i++)
 	{
 	printf("\t %s",vector[i]);	
	}
	
	

}

void sortStrings(char **sp, int m)
{
		int i,j,temp;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
		if(*(sp+i)>*(sp+j))
		{
			temp=*(sp+i);
			*(sp+i)=*(sp+j);
			*(sp+j)=temp;
		}
		}	
		
	}
}


