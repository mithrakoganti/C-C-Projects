#include<iostream>

using namespace std;

class Pointer_Multiply5
{
	int a,b;
	public:
		int get_a();
		int get_b();
		Pointer_Multiply5(int, int);
		~Pointer_Multiply5();

};

Pointer_Multiply5::Pointer_Multiply5(int m, int n)
{
	a=5*m;
	b=5*n;
	
	
}


Pointer_Multiply5::~Pointer_Multiply5()
{
	cout<<"\n"<<"Object is blowing up";
}

int Pointer_Multiply5:: get_a()
{
	return a;
}

int Pointer_Multiply5:: get_b()
{
	return b;
}
int main()
{
	int x,y;
	cout<<"\n"<<"Enter an integer:";
	cin>>x;
	cout<<"\n"<<"Enter an integer:";
	cin>>y;
	Pointer_Multiply5 o1(x,y);//o1 is an object of type "Pointer_Multiply5";
	cout<<"\n"<<"Multiplied values are:";
	cout<<"\n"<<o1.get_a();
	cout<<"\n"<<o1.get_b();
	Pointer_Multiply5  *pm5;// pm5 is a pointer to "Pointer_Multiply5"type;
	Pointer_Multiply5 oary[3]={Pointer_Multiply5 (6,7), Pointer_Multiply5 (7,8), Pointer_Multiply5 (2,3)};
	pm5=oary;//pm5 is now pointing to o1;
	for(int i=0;i<3;i++)
	{
	cout<<"\n"<<pm5->get_a();
	cout<<"\n"<<pm5->get_b();
	pm5++;	
	}
	

	
	
	
	

}
