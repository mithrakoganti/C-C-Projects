#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
int i,n;
 printf("Enter number of elements:");
 scanf("%d", &n);		
int *buf = (int*)malloc(n*sizeof(int));

 if(buf==NULL)
 {
 	printf("No memory available");
 	 exit(1);
 }
 
 printf("\n The elements are:\n");
 for(i=0;i<n;i++)
 {
 	printf(" \n %d ",buf[i]);
 }
 free(buf);
 int *bufx = (int*)calloc(n,sizeof(int));
 if(bufx==NULL)
 {
 	printf("No memory available");
 	 exit(1);
 }
 
 printf("\n The elements are:\n");
 for(i=0;i<n;i++)
 {
 	printf(" \n %d ",bufx[i]);
 }
 free(bufx);
}
 
 
 

 
 
	
