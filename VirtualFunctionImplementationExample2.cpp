#include<iostream>
#include<cstring>

using namespace std;

class Employee
{
	char *ename;
	int eid;
	float ebonus;
	public:
		Employee(char *name, int id)
		{
			strcpy(ename,name);
			eid=id;
			
		}
		
		~Employee()
		{
			cout<<"Employee1 object is blowing up";
		}
		void disp_edetails()
		{
			cout<<"Employee name:"<<ename;
			cout<<"Employee id:"<<eid;
		}	
		
		int get_eid()
		{
			return eid;
		}
	
		void set_bonus(float bonus)
		{
			ebonus=bonus;
		}
};

class Manager:public Employee
{
	float yoe;
	public:
		Manager(char *name, int id, float ye):Employee(name, id)
		{
		 	yoe=ye;
		}
		
		~Manager()
		{
			cout<<"Manager object is blowing up";
		}
		
		void disp_edetails()
		{
		
			cout<<"Managerial experience:"<<yoe;
		}
		
};

class Clerk:public Employee
{
	char *qlfn;
	public:
		Clerk(char *name, int id, char *qn):Employee(name, id)
		{
		 	strcpy(qlfn,qn);
		}
		
		~Clerk()
		{
			cout<<"Clerk object is blowing up";
		}
		
		void disp_edetails()
		{
		
			cout<<"Clerk qualification:"<<qlfn;
		}
		
};

void give_bonus(Employee *ep)
{

	if(ep->get_eid()<15)
	{
		ep->set_bonus(1234);
	}
	else
	{
		ep->set_bonus(3245);
	}
	
}

int main()
{
	Clerk co("Mithra", 16, "Intermediate");	
	Manager mo("ABC", 15, 8);
	give_bonus(&co);
	give_bonus(&mo);
	
}
