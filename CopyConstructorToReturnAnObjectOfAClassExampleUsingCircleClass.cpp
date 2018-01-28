#include<iostream>

using namespace std;


class Circle
{
	int radius;
	float area;
	public:
		Circle(int);
		Circle(const Circle &co);
		~Circle();
		void setArea();
		float getArea();
					
};

Circle::Circle(int ra=1)
{
	radius =  ra;
	cout<<"\n"<<"Invoking normal constructor";
}

Circle::Circle(const Circle &co)
{
	radius = co.radius;	
	cout<<"\n"<<"Invoking copy constructor";
}

Circle::~Circle()
{
	cout<<"\n"<<"Circle object is blowing up";
}


void Circle::setArea()
{
	area = 3.14*radius*radius;
		
}

float Circle::getArea()
{
	return area;
}
Circle makeCircle(int r)
{
	Circle c1(r);
	return c1;
}

int main()
{
	int rad;
	cout<<"\n"<<"Enter radius of the circle:";
	cin>>rad;
	Circle cx;
	cx = makeCircle(rad);
	cx.setArea();
	cout<<"\n"<<"Area of circle is:"<<cx.getArea();
}
