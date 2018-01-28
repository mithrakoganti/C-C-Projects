#include<iostream>

using namespace std;

class Dyna_Overload
{
	int x;
		
	public:
		Dyna_Overload();
		Dyna_Overload(int);
		void set_x(int n)
		{
			x=n;
		}
		
		int get_x()
		{
			return x;
		}
		
		
};

Dyna_Overload::Dyna_Overload()
{
	x=0;
}

Dyna_Overload::Dyna_Overload(int n)
{
	x=n;
}

int main()
{
	
	Dyna_Overload *pdo;
	Dyna_Overload do1(5);
	
	pdo = new Dyna_Overload[6];// Dynamic array cannot be initialized.
	if(!pdo)
	{
		cout<<"\n"<<"Allocation error";
	}
	for(int i=0;i<5;i++)
	{
		pdo[i]=do1;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\n"<<"pdo["<<i<<"]:"<<pdo[i].get_x();
	}
}
