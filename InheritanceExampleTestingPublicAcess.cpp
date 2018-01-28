#include<iostream>

using namespace std;

class MyBase
{
	int x;
	public:
		int t;
		void set_x(int a)
		{
			x=a;
		}
		void show_x()
		{
			cout<<"\n"<<"x="<<x;	
		}
	
	
};

class MyDerived:public MyBase
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
		void sum_ty()
		{
			//cout<<"\n"<<"Sum = "<<x+y+t;(Error statement since x is a private member of base class and cannot be accessed here)
			cout<<"\n"<<"Sum = "<<y+t;
		}
};

int main()
{
	MyDerived mdo;
	int p, q;
	cout<<"\n"<<"Enter an integer:";
	cin>>p;
	cout<<"\n"<<"Enter an integer:";
	cin>>q;
	mdo.set_y(q);
	mdo.show_y();
	mdo.t= 15;
	mdo.sum_ty();
		
}
