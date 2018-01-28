//Overloading ambiguity

#include<iostream>

using namespace std;

float fun1(float fv)
{
	return fv/2.0;
}

double fun1(double dv)
{
	return dv/2.0;
}

int main()
{
	float f = 5.32;
	double d = 5.32;
	cout<<"\n"<<fun1(f);
	cout<<"\n"<<fun1(d);
	cout<<"\n"<<fun1(3.14);
	//cout<<"\n"<<fun1(5);------>Integer  
	
}


