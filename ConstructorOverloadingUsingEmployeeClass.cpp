#include<iostream>
#include<cstring>

using namespace std;

class Employee
{
	char ename[30];
	float ebonus;
	int eage;
	
	public:
		Employee();
		Employee(char[]);
		Employee(char[], int);
		Employee(char[], int, float);
		~Employee();
		void print_eDetails();		
		
};

Employee::Employee()
{
	
}

Employee::Employee(char np[])
{
	strcpy(ename, np);
}

Employee::Employee(char np[], int age)
{
	strcpy(ename, np);
	eage = age;
}

Employee::Employee(char np[], int age, float bonus)
{
	strcpy(ename, np);
	eage= age;
	ebonus=bonus;
}

void Employee::print_eDetails()
{
	cout<<"\n"<<"Employee name is:"<<ename;
	cout<<"\n"<<"Employee age is:"<<eage;
	cout<<"\n"<<"Employee bonus is:"<<ebonus;
	
}

Employee::~Employee()
{
	cout<<"\n"<<"Employee object is blowing up";
}

int main()
{
	char name[30];
	int a;
	float b;
	cout<<"\n"<<"Enter name of the employee:";
	cin>>name;
	cout<<"\n"<<"Enter age of the employee:";
	cin>>a;
		if(a<30)
	{
		b=5000;
	}
	else if(a>=30&& a<50)
	{
		b = 10000;
	}
	else
	{
		b = 15000;
	}	
	Employee e0;
	Employee e1(name);
	Employee e2(name, a);
	Employee e3(name, a, b);
	e0.print_eDetails();
	e1.print_eDetails();
	e2.print_eDetails();
	e3.print_eDetails();
		
}
