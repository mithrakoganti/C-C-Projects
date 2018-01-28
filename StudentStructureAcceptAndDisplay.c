#include<stdio.h>
#include<conio.h>
#include<string.h>


	struct Student {
	int sid;
	char sname[40];
	int smarks;
	int sage;
	char sgender[6];
	};
	
void accept_Std(struct Student *);
void display_Std(struct Student);

int main()
{
	
	struct Student std;
	accept_Std(&std);
	display_Std(std);
	
}

void accept_Std(struct Student *ps)
{
	printf("\n Enter student id_no:");
	scanf("%d",	&ps->sid);
	printf("\n Enter student name:");
	scanf(" %s", ps->sname);
	printf("\n Enter student marks:");
	scanf("%d",	&ps->smarks);
	printf("\n Enter student age:");
	scanf("%d",	&ps->sage);
	printf("\n Enter student gender:");
	scanf(" %s", ps->sgender);
	
}


void display_Std(struct Student s)
{
	printf("\n Student details are listed below:\n");
	printf("\n Student name = %s", s.sname);
	printf("\n Student Id_no = %d", s.sid);
	printf("\n Student marks = %d", s.smarks);
	printf("\n Student age = %d", s.sage);
	printf("\n Student gender = %s", s.sgender);
	
}
