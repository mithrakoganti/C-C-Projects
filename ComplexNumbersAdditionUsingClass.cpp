#include<iostream>

using namespace std;

class Complex {
	public:
		int real;
		int img;
		
		void set_Complex()
		{
			cout<<"\n"<<"Enter an integer:";
			cin>>real;
			cout<<"\n"<<"Enter an integer:";
			cin>>img;
		}
	
	Complex add_Complex(Complex cp)
	{
		Complex cpx;
		cpx.real=real+cp.real;
		cpx.img=img+cp.img;
		return cpx;
		
	}
	
	void print_Complex()
	{
		cout<<"\n"<<"Result is:"<<real<<"+"<<img<<"i";
	}
	
};
		

		int main()
		{
			Complex cp1,cp2,cpr;
			cout<<"\n Enter 1st Complex number:";
			cp1.set_Complex();
			cout<<"\n Enter 2nd Complex number:";
			cp2.set_Complex();
			cpr=cp1.add_Complex(cp2);
			cpr.print_Complex();
			
			
		}
	
	
	
	
