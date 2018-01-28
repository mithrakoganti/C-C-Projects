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

class MyDerived:public MyBase
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

class MyDerivedX:public MyDerived
{
		public:
			void test_z()
			{
				cout<<"\n"<<"z="<<z;
			}
};

int main()
{
	MyDerivedX mdox;
	int p, q, r;
	cout<<"\n"<<"Enter an integer:";
	cin>>p;
	mdox.set_x(p);
	mdox.show_x();
	cout<<"\n"<<"Enter an integer:";
	cin>>q;
	cout<<"\n"<<"Enter an integer:";
	cin>>r;
	mdox.set_yz(q, r);
	mdox.show_yz();
	mdox.add_yz();
	mdox.test_z();
			
}
