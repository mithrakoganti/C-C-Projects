#include<iostream>
#include<cstring>

using namespace std;

class Rectangle
{
	float length;
	float breadth;
	float area;
	
	public:
		Rectangle();
		Rectangle(float);
		Rectangle(float, float);
		~Rectangle();
		float rect_area();
	
		
};

Rectangle::Rectangle()
{
	length = 10.5;
	breadth = 8.5;
}

Rectangle::Rectangle(float l)
{
	
	length = l;
	breadth= 8.5;
}

Rectangle::Rectangle(float l, float b)
{
	length = l;
	breadth = b;
		
}



Rectangle::~Rectangle()
{
	cout<<"\n"<<"Rectangle object is blowing up";
}

float Rectangle::rect_area()
{
	float a;
	a=length*breadth;
	return a;
}

int main()
{
	
	float len, brd, ar;
	cout<<"\n"<<"Enter length of the rectangle:";
	cin>>len;
	cout<<"\n"<<"Enter breadth of the rectangle:";
	cin>>brd;		
	Rectangle r2(len, brd);
	ar = r2.rect_area();
	cout<<"\n"<<"Area of rectangle is:"<<ar;
	
	
		
}
