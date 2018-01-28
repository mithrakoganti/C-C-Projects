#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);
		friend Coord operator +(int, Coord);
		friend Coord operator +(Coord, int);	
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
Coord operator +(int a, Coord ob2)
{
	Coord temp;
	temp.x=a+ob2.x;
	temp.y=ob2.y+a;
	return temp;
	
}

Coord operator +(Coord ob2, int a)
{
	Coord temp;
	temp.x=a+ob2.x;
	temp.y=ob2.y+a;
	return temp;
	
}



int main()
{
	Coord co1(5,10);
	//Coord co2(10,15);
	//Coord co3;
	int p, q;
	co1=co1+10;//co1=add(co1,10)
	co1.get_xy(p, q);
	cout<<"\n"<<"Resultant x:"<<p<<"\n"<<"Resultant y:"<<q;
	// Order is not important(int, Coord) or (Coord, int) since it is a friend function;
	co1=5+co1;//co1=add(5,co1);
	co1.get_xy(p, q);
	cout<<"\n"<<"Resultant x:"<<p<<"\n"<<"Resultant y:"<<q;
	
}
