#include<iostream>

using namespace std;

class Base
{
	char chx;
	
	public:
		
		void set_chx(char cha)
		{
			chx=cha;	
		}
		char get_chx()
		{
			return chx;
		}
		
};

class Derived:public Base
{
	char chy;
	
	public:
		
		void set_chy(char chb)
		{
			chy=chb;	
		}
		char get_chy()
		{
			return chy;
		}		
};

int main()
{
	Base bob;
	char ch;
	Derived dob;
	Base *pb;
	pb= &bob;
	cout<<"\n"<<"Enter any charcater:";
	cin>> ch;
	pb->set_chx(ch);
	cout<<"\n"<<"Base object character is:"<<pb->get_chx();
	pb=&dob;
	pb->set_chx(ch+5);
	cout<<"\n"<<"Derived object character x is:"<<pb->get_chx();
/*	pb=&bob;
	cout<<"\n"<<"Base object character is:"<<pb->get_chx();*/
	/*pb->set_chy(ch+5);
	cout<<"\n"<<"Derived object character x is:"<<pb->get_chy();
	---> Even though the object is Derived, the pointer is of type Base.
	Base class doesn't have the member functions set_chy and get_chy. So we can't invoke those functions on the	
	pointer to the base class.*/
	dob.set_chy(ch+7);
	cout<<"\n"<<"Derived object character y is:"<<dob.get_chy();
	
}
