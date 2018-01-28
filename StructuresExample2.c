#include<stdio.h>
#include<conio.h>
#include<string.h>
	struct Employee {
		int eid;
		char ename[40];
		float esalary;
		int eage;
		char egender[6];
	} ;


void printStructData(struct Employee *);


int main()
{
	int i,n;
	
	struct Employee emp[3],e1;
	struct Employee *ep;
	ep=&e1;
	
	(*ep).eid = 1001;
	strcpy((*ep).ename, "ABD");
	(*ep).esalary = 2345.00;
	ep->eage = 25;
	strcpy(ep->egender, "Female");
	
	printf("\n \t %d %s \n", ep->eid,e1.ename);
	emp[0].eid = 101;
	strcpy(emp[0].ename, "ABC");
	emp[0].esalary = 2345.00;
	emp[0].eage = 25;
	strcpy(emp[0].egender, "Female");
	
	emp[1].eid = 102;
	strcpy(emp[1].ename, "DEF");
	emp[1].esalary = 2344.00;
	emp[1].eage = 23;
	strcpy(emp[1].egender, "male");
	
	emp[2].eid = 103;
	strcpy(emp[2].ename, "GHI");
	emp[2].esalary = 2356.00;
	emp[2].eage = 26;
	strcpy(emp[2].egender, "Female");
	
	printStructData(emp);
}

void printStructData(struct Employee *e)
{
	printf("\n Employee details are:\n");
    printf("\t Id_no= %d , Name= %s , Age = %d, Salary = %f, Gender = %s", e[1].eid, e[1].ename, e[1].eage, e[1].esalary, e[1].egender);
	
	
}



