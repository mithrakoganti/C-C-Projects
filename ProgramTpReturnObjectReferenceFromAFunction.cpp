#include<iostream>
#include<string.h>

using namespace std;

class Restaurant
{
	char rname[30];
	int rid;
	char raddress[50];
	public:
		Restaurant();
		Restaurant(char[], int, char[]);
		~Restaurant();
		void print_rDetails();
	
};

Restaurant::Restaurant()
{
	
}

Restaurant::Restaurant(char name[], int id, char address[])
{
	strcpy(rname, name);
	rid=id;
	strcpy(raddress, address);
}

Restaurant::~Restaurant()
{
	cout<<"\n"<<"Restaurant object is blowing up";
}

void Restaurant::print_rDetails()
{
	cout<<"\n"<<"Restaurant name:"<<rname;
	cout<<"\n"<<"Restaurant id:"<<rid;
	cout<<"\n"<<"Restaurant address:"<<raddress;
}

Restaurant find_rLocation()

{
	char mname[30], maddress[50];
	int mid;
	cout<<"\n"<<"Enter Restaurant name:";
	cin>>mname;
	cout<<"\n"<<"Enter Restaurant id:";
	cin>>mid;
	cout<<"\n"<<"Enter Restaurant Address:";
	cin>>maddress;
	Restaurant ro(mname, mid, maddress);
	return ro;
	
}



int main()
{
	
	Restaurant r =find_rLocation();
	r.print_rDetails();
	
	
}
