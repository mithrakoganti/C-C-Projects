#include<iostream>
#include<string.h>

using namespace std;

class Inventory
{
	char iname[20];
	int  icost, iquant;
 
public:
	void disp_Inventory();
	Inventory(char[], int, int);
	~Inventory();
	
};

Inventory::Inventory(char cname[], int ccost, int cquant)
{
	strcpy(iname, cname);
	icost=ccost;
	iquant=cquant;	
}

Inventory::~Inventory()
{
	cout<<"\n"<<"Inventory is blowing up";
}


void Inventory::disp_Inventory()
{
	cout<<"\n"<<"Item Name:"<<iname;
	cout<<"\t"<<"Item Cost:"<<icost;
	cout<<"\t"<<"Item Quantity:"<<iquant;
}




int main()
{
	
	char name[20];
	int cost, quant;
	cout<<"\n"<<"Enter item name:";
	cin>>name;
	cout<<"\n"<<"Enter item cost:";
	cin>>cost;
	cout<<"\n"<<"Enter item quantity:";
	cin>>quant;
	
	Inventory i1(name, cost, quant);
	//cout<<"\n"<<i.disp_Inventory();
	i.disp_Inventory();
	
	
 
}
