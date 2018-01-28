#include<stdio.h>
#include<conio.h>

struct Employee {
	int eid;
	char ename[40];
	float esalary;
	int eage;
	char egender[6];
};

int main()
{
	int i,n;
	struct Employee e1, e2, e3;
	printf("\n Enter the names of three employees:");
	scanf("%s %s %s", e1.ename, e2.ename, e3.ename); 
	/* gets(e1.ename);
	gets(e2.ename);
	gets(e3.ename); */
	fflush(stdin);
	
	
	
	printf("\n Enter the id_no's of three employees:");
    scanf("%d %d %d", &e1.eid, &e2.eid, &e3.eid); 
    
    printf("\n Enter the salaries of three employees:");
    scanf("%f %f %f", &e1.esalary, &e2.esalary, &e3.esalary); 
	
	printf("\n Enter the ages of three employees:");
    scanf("%d %d %d", &e1.eage, &e2.eage, &e3.eage); 
    
	printf("\n Enter the genders of three employees:");
	scanf("%s %s %s", e1.egender, e2.egender, e3.egender); 
/*	gets(e1.egender);
	gets(e2.egender);
	gets(e3.egender); */
    
    
    printf("\n Employee 1 details are:\n");
    printf("\t Id_no= %d , Name= %s , Age = %d, Salary = %f, Gender = %s", e1.eid, e1.ename, e1.eage, e1.esalary, e1.egender);
	
	
	
}

