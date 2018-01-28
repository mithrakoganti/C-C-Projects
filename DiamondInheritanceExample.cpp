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

class Derived1:virtual public Base1
{
	int y;
	public:
		Derived1(int a, int b): Base1(a)
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

class Derived2:virtual public Base1
{
	int z;
	public:
		Derived2(int a, int c): Base1(a)
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
		
};

class Derived3:public Derived1,public Derived2
{
	int p;
	public:
		Derived3(int a, int b, int c, int d ): Derived1(a, b), Derived2(a, c), Base1(a)
		{
			p=d;
			cout<<"\n"<<"Derived3 is created";
		}

		~Derived3()
		{
			cout<<"\n"<<"Derived3 object is blowing up";
		}
		
			int get_p()
		{
			return p;
		}
		
		void show()
		{
			cout<<"\n"<<"x="<<get_x();
			cout<<"\n"<<"y="<<get_y();
			cout<<"\n"<<"z="<<get_z();
			cout<<"\n"<<"p="<<p;	
			
		}
};

int main()
{
	Derived3 d3(5,10,15,20);
	d3.show();
	
}
