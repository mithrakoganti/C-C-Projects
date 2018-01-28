#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);	
		friend void operator ++(Coord&);	
		friend void operator ++(Coord&, int);	
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

void operator ++(Coord &ob1)
{
	ob1.x++;
	ob1.y++;
	
}

void operator ++(Coord &ob1, int nu)
{
	ob1.x++;
	ob1.y++;
	
}

int main()
{
	int p, q;
	cout<<"\n"<<"Enter an integer(x coordinate):";
	cin>>p;
	cout<<"\n"<<"Enter an integer(y coordinate):";
	cin>>q;
	Coord co1(p,q);
	co1++;
	co1.get_xy(p,q);
	cout<<"\n"<<"Resultant x after incrementing by 1:"<<p<<"\n"<<"Resultant y after incrementing by 1:"<<q;
	
}
