#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);
		Coord operator +(int);	
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
Coord Coord:: operator +(int a)
{
	Coord temp;
	temp.x=a+x;
	temp.y=y+a;
	return temp;
	
}


int main()
{
	Coord co1(5,10);
	//Coord co2(10,15);
	//Coord co3;
	int p, q;
	co1=co1+10;//co1=co1.add(10);
	co1.get_xy(p, q);
	cout<<"\n"<<"Resultant x:"<<p<<"\n"<<"Resultant y:"<<q;
	/*co1=5+co1;//co1=5.add(co1);
	co1.get_xy(p, q);
	cout<<"\n"<<"Resultant x:"<<p<<"\n"<<"Resultant y:"<<q;
----> object = int_value+object  is illegal for a member function since an operator function cannot be invoked on a primitive value..*/	
}
