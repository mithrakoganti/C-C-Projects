#include<stdio.h>
#include<conio.h>

struct Student{
	int idno;
	char name[20];
	int m1,m2,m3;
};

void main(){
	struct Student s1,s2;
	
	printf("Enter 2 Student's Details : \n");
	
	printf("Enter 2 Id Nos : \n");
	scanf("%d%d",&s1.idno,&s2.idno);
	
	printf("Enter 2 Names : \n");
	scanf("%s%s",s1.name,s2.name);
	
	printf("Enter 3 marks of 2 students: \n");
	scanf("%d%d%d%d%d%d",&s1.m1,&s1.m2,&s1.m3,&s2.m1,&s2.m2,&s2.m3);
	
	printf("Student-1 Details : ");
	printf("%d %s %d %d %d",s1.idno,s1.name,s1.m1,s1.m2,s1.m3);
}

