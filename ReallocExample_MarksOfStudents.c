#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i,n,add_new;
 printf("Enter number of students:");
 scanf("%d", &n);
 int *marks = (int*)malloc(n*sizeof(int));

 if(marks==NULL)
 {
 	printf("No marks entered");
 	 exit(1);
 }
 printf("Enter the marks of students below:\n");
 for(i=0;i<n;i++)
 {
 	printf("\n Enter marks of student %d:",i+1);
 	scanf("%d",marks+i);
 }
 printf("\n Enter additional number of students:");
 scanf("%d", &add_new);
	marks = (int*)realloc(marks, (n+add_new)*sizeof(int));
	printf("\n Enter marks of additional students below:\n");
	for(i=n;i<(n+add_new);i++)
	{
		printf("\n Enter marks of student %d:", i+1);
		scanf("%d",marks+i);
	}
	printf("\n Marks entered are as follows:\n");
	for(i=0;i<(n+add_new);i++)
	{
		printf("\t %d", marks[i]);
	}
	free(marks);
}
