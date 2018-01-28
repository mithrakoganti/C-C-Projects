#include<iostream>

using namespace std;

class MyBase
{
	int x;
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

class MyDerived:MyBase
{
	int y;
	
	public:
		void set_y(int a)
		{
			y=a;
		}
		
		void show_y()
		{
			cout<<"\n"<<"y="<<y;
		}
};

int main()
{
	MyDerived mdo;
	int p, q;
	cout<<"\n"<<"Enter an integer:";
	cin>>p;
	//mdo.set_x(p);-->Because of private access these public  member functions have become private members in MyDerived class
	//mdo.show_x();-->Because of private access these public  member functions have become private members in MyDerived class
	cout<<"\n"<<"Enter an integer:";
	cin>>q;
	mdo.set_y(q);
	mdo.show_y();	
}
