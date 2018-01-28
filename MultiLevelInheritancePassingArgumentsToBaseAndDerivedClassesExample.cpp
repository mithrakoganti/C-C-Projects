#include<iostream>

using namespace std;

class Base1
{
	int x;
	public:
		Base1(int a)
		{
			x=a;
			cout<<"\n"<<"Base1 is created";
		}
		
		~Base1()
		{
			cout<<"\n"<<"Base1 object is blowing up";
		}
		
		int get_x()
		{
			return x;
		}
};

class Derived1:public Base1
{
	int y;
	public:
		Derived1(int a,int b):Base1(a)
		{
			y=b;
			cout<<"\n"<<"Derived1 is created";
		}

		~Derived1()
		{
			cout<<"\n"<<"Derived1 object is blowing up";
		}
		
			int get_y()
		{
			return y;
		}
};

class Derived2:public Derived1
{
	int z;
	public:
		Derived2(int a, int b, int c):Derived1(a, b)
		{
			z=c;
			cout<<"\n"<<"Derived2 is created";
		}

		~Derived2()
		{
			cout<<"\n"<<"Derived2 object is blowing up";
		}
		
			int get_z()
		{
			return z;
		}
		
		void show()
		{
			cout<<"\n"<<"x="<<get_x();
			cout<<"\n"<<"y="<<get_y();
			cout<<"\n"<<"z="<<z;
			
		}
};


int main()
{
	Derived2 d2(5,10,15);
	d2.show();
	
}
