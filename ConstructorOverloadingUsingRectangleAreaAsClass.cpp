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
	
	float ar;		
	Rectangle r0;
	ar = r0.rect_area();
	cout<<"\n"<<"Area of rectangle is:"<<ar;
			
}
