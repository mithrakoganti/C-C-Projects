#include<iostream>

using namespace std;

class Complex {

	int real;
	int img;
	public:
		
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
		cpx.img = img+cp.img;
		
		return cpx;
	}
	
	void print_Complex()
	{
		cout<<"\n"<<"Result of complex numbers addition is:"<<real<<"+"<<"i"<<img;
												
	}
};

int main()
{
	Complex cp1, cp2, cpr;
	cout<<"\n"<<"Enter a Complex number:";
	cp1.set_Complex();
	cout<<"\n"<<"Enter a Complex number:";
	cp2.set_Complex();
	cpr = cp1.add_Complex(cp2);
	cpr.print_Complex();
								
}
