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

class Base2
{
	int y;
	public:
		Base2(int b)
		{
			y=b;
			cout<<"\n"<<"Base2 is created";
		}

		~Base2()
		{
			cout<<"\n"<<"Base2 object is blowing up";
		}
		
			int get_y()
		{
			return y;
		}
};

class Derived1:public Base1, public Base2
{
	int z;
	public:
		Derived1(int a, int b, int c): Base1(a), Base2(b)
		{
			z=c;
			cout<<"\n"<<"Derived1 is created";
		}

		~Derived1()
		{
			cout<<"\n"<<"Derived1 object is blowing up";
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
	Derived1 d1(5,10,15);
	d1.show();	
}
