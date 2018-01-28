#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);
		void operator ++();
		void operator ++(int);
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

void Coord::operator ++()
{

	x++;
	y++;
	cout<<"\n"<<"Invoked pre increment operator function";
}

void Coord::operator ++(int nu)
{
	x++;
	y++;
	cout<<"\n"<<"Invoked post increment operator function";
}

int main()
{
	int p, q;
	cout<<"\n"<<"Enter an integer(x coordinate):";
	cin>>p;
	cout<<"\n"<<"Enter an integer(y coordinate):";
	cin>>q;
	Coord co1(p,q);
	co1 ++;//co1.increment();
	co1.get_xy(p,q);
	cout<<"\n"<<"Resultant x after incrementing by 1:"<<p<<"\n"<<"Resultant y after incrementing by 1:"<<q;
	 ++co1;//co1.increment();
	co1.get_xy(p,q);
	cout<<"\n"<<"Resultant x after incrementing by 1:"<<p<<"\n"<<"Resultant y after incrementing by 1:"<<q;
	
}
