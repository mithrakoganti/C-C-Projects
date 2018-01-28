#include<iostream>

using namespace std;


class MyBase
{
	int x;
	
	protected:
		int z;
	public:
		
		void set_x(int a)
		{
			x=a;
		}
		void show_x()
		{
			cout<<"\n"<<"x="<<x;	
		}
	
};

class MyDerived:protected MyBase
{
	int y;
	
	public:
		void set_yz(int a, int b)
		{
			y=a;
			z=b;
		}
		
		void show_yz()
		{
			cout<<"\n"<<"y="<<y;
			cout<<"\n"<<"z="<<z;
		}
		void add_yz()
		{
			cout<<"\n"<<"Sum of (y+z) is:"<<y+z;
		}
};


int main()
{
	MyDerived mdo;
	int p, q, r;
	cout<<"\n"<<"Enter an integer:";
	cin>>p;
	//mdo.set_x(p);
	//mdo.show_x();
	cout<<"\n"<<"Enter an integer:";
	cin>>q;
	cout<<"\n"<<"Enter an integer:";
	cin>>r;
	mdo.set_yz(q, r);
	mdo.show_yz();
	mdo.add_yz();
			
}
