#include<stdio.h>
#include<conio.h>

//Defining employee structure
struct Employee {
	int eid;
	char ename[25];
	float esalary;
	int eage;
	char egender[6];
};

int main()
{
	//Declaring Employee structure variable and Initialization of Employee structure variables
	
	struct Employee  e1={1,"Mithra",50000,25,"Female"},
	e2={2,"Raja",60000,29,"Male"},
	e3={3,"Sahithi",70000,25,"Female"};
	
	//Accessing members of Employee structre
	printf("\n Name  and gender of Employee with id %d  salary %f age %d are %s and %s", e1.eid, e1.esalary, e1.eage, e1.ename, e1.egender);
	printf("\n Name  and gender of Employee with id %d  salary %f age %d are %s and %s", e2.eid, e2.esalary, e2.eage, e1.ename, e2.egender);
	printf("\n Name  and gender of Employee with id %d  salary %f age %d are %s and %s", e3.eid, e3.esalary, e3.eage, e3.ename, e3.egender);
}
