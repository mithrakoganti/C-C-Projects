#include<iostream>
#include<string.h>

using namespace std;

class Inventory
{
	char iname[20];
	int  icost, iquant;
 
public:
	Inventory();
	Inventory(char[], int, int);
	~Inventory();
	void disp_Inventory();
	
	
};
Inventory::Inventory()
{

}

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
	int cost, quant, n,i;
	cout<<"\n"<<"Enter the number of inventory items:";
	cin>>n;
	Inventory iary[n], *piary;
	piary=iary;
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<"Enter item name:";
		cin>>name;
		cout<<"\n"<<"Enter item cost:";
		cin>>cost;
		cout<<"\n"<<"Enter item quantity:";
		cin>>quant;
		piary[i]=Inventory(name, cost, quant);
	
	}

	for(i=0;i<n;i++)
	{
	piary->disp_Inventory();
	piary++;
	cout<<"\n";
   	}				 
	
	
 
}
