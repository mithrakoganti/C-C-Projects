#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
int i,n;
 printf("Enter number of elements:");
 scanf("%d", &n);		
 char *buf = (char*)malloc(n*sizeof(char));

 if(buf==NULL)
 {
 	printf("No memory available");
 	 exit(1);
 }
 printf("Enter the elements below:\n");
 for(i=0;i<n;i++)
 {
 	printf("\n Enter element %d:",i+1);
 	scanf(" %c",buf+i);
 }
 printf("\n The elements are:\n");
 for(i=0;i<n;i++)
 {
 	printf(" \n %c ",buf[i]);
 }
 free(buf);
}
 
 
 

 
 
	