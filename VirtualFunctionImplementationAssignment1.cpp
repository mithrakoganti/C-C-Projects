#include<iostream>

using namespace std;

class Figure
{  	
	float dim1, dim2;
	
	public:
	
	void set_dimension(float d1, float d2)	
	{
		dim1=d1;
		dim2=d2;
	}
	
	void get_dimension(float &a, float &b)
	{
		a=dim1;
		b=dim2;
	}
		
	virtual float get_area()
	{
		
		return 0.0;
	}
		
};

class Rectangle:public Figure
{
	public:
	float get_area()
	{
		float d1, d2;
		get_dimension(d1, d2);
		return d1*d2;
	
	}	
};

class Triangle:public Figure
{
	public:
	float get_area()
	{
		float d1, d2;
		get_dimension(d1, d2);
		return 0.5*d1*d2;
	}
};

int main()
{
	Figure fo;
	Rectangle ro;
	ro.set_dimension(4,3);
	Figure *fp;
	fp=&ro;
	cout<<"\n"<<"Rectangle area is:"<<fp->get_area();
	Triangle to;
	to.set_dimension(3,4);
	fp=&to;
	cout<<"\n"<<"Triangle area is:"<<fp->get_area();	
	
}


