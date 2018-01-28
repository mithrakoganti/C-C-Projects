//Multi-level Inheritance
#include<iostream>

using namespace std;

class Myclass1
{
	public:
	Myclass1()
	{
		cout<<"\n"<<"Invoked Myclass1";
		cout<<"\n"<<"Myclass1 object is created";
	}
	~Myclass1()
	{
		cout<<"\n"<<"Myclass1 object is blowing up";
	}
};

class Myclass2: public Myclass1
{
	public:
		Myclass2()
	{
		cout<<"\n"<<"Invoked Myclass2";
		cout<<"\n"<<"Myclass2 object is created";
	}
	~Myclass2()
	{
		cout<<"\n"<<"Myclass2 object is blowing up";
	}
	
};

class Myclass3:public Myclass2
{
	public:
		Myclass3()
	{
		cout<<"\n"<<"Invoked Myclass3";
		cout<<"\n"<<"Myclass3 object is created";
		
	}
	~Myclass3()
	{
		cout<<"\n"<<"Myclass3 object is blowing up";
	}
	
};

int main()
{
	Myclass3 mc3;
		
}
