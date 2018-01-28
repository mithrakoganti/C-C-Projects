#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);
		friend Coord operator +(Coord, Coord);	
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
Coord operator +(Coord ob1, Coord ob2)
{
	Coord temp;
	temp.x=ob1.x+ob2.x;
	temp.y=ob1.y+ob2.y;
	return temp;
	
}

int main()
{
	Coord co1(5,10);
	Coord co2(10,15);
	Coord co3;
	int p, q;
	co3=co1+co2;//co3=add(co1, co2);
	co3.get_xy(p, q);
	cout<<"\n"<<"Resultant x:"<<p<<"\n"<<"Resultant y:"<<q;
	
}
