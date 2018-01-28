#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i=0,n=0, mark,size=3;
    int *marks = (int*)malloc(size*sizeof(int));
	printf("Enter marks of students with '-1' to stop:\n");
	scanf ("%d",&mark);
	while(mark!=-1)
	{
		if(n>=size)
		{
		size=size+3;	
		printf("\n Reallocating 3 more integers \n");
		marks = (int*)realloc(marks, size*sizeof(int));
		 if(marks==NULL)
 		 {
 			printf("No marks entered");
 	 		exit(1);
		 }
		}
		marks[n]=mark;
		scanf("%d",&mark);
		n++;
	}
	printf("\n Marks of students are:\n");
	for(i=0;i<n;i++)
	{
		printf("\t %d",marks[i]);
	}
	
	
}
