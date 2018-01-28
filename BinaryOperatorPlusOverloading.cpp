#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);
		Coord operator +(Coord);	
};

Coord::Coord()
{
	x=0;
	y=0;
}
Coord::Coord(int x, int y)
{
	this->x=x;
	this->y=y;
	
}
void Coord:: get_xy(int &a, int &b)
{
	a=x;
	b=y;
}
Coord Coord::operator +(Coord ob1)
{
	Coord temp;
	temp.x=x+ob1.x;
	temp.y=y+ob1.y;
	return temp;
	
}

int main()
{
	Coord co1(5,10);
	Coord co2(10,15);
	Coord co3;
	int p, q;
	co3=co1+co2;//co3=co1.add(co2);
	co3.get_xy(p, q);
	cout<<"\n"<<"Resultant x:"<<p<<"\n"<<"Resultant y:"<<q;
	
}
