#include<stdio.h>
#include<conio.h>

void graceMarks(int *ap, int , int);

int main()
{
 int i,n, iary[20], grace_marks;
 printf("Enter number of students:");
 scanf("%d", &n);
 for(i=0;i<n;i++){
 printf("Enter marks of student %d in the subject:", i+1);
 scanf("%d", &iary[i]);
 }
 printf("Enter grace marks to be added:");
 scanf("%d", &grace_marks);
  graceMarks(iary, grace_marks,n);
 	
}

void graceMarks(int *ap, int gm , int n)// void graceMarks(int iaryx[], int gm, int n)--> Both are same

{
int i;
for(i=0;i<n;i++)
{
	*ap= *ap+gm;
	printf("\n Marks of student %d after adding grace marks= %d", i+1, *ap);
	*ap++;	
}

	
}