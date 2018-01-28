#include<iostream>

using namespace std;

class Coord{
	int x,y;
	public:
		Coord();
		Coord(int, int);
		void get_xy(int &a, int &b);
		int operator ==(Coord);	
};

Coord::Coord()
{
	x=0;
	y=0;
}
Coord::Coord(int x, int y)
{
	/*cout<<"\n"<<"Enter an integer(x coordinate):";
	cin>>x;
	cout<<"\n"<<"Enter an integer(y coordinate):";
	cin>>y;*/
	
	this->x=x;
	this->y=y;
	
}
void Coord:: get_xy(int &a, int &b)
{
	a=x;
	b=y;
}

int Coord::operator ==(Coord ob1)
{
	return (x==ob1.x&&y==ob1.y);
	//return (x==ob1.x&&y==ob1.y) ? 1: 0;
	
/*	if(x==ob1.x&&y==ob1.y)
	return 1; 
	else
	return 0 ;*/
}

int main()
{
	int p, q, r, s, flag;
	cout<<"\n"<<"Enter an integer(x coordinate):";
	cin>>p;
	cout<<"\n"<<"Enter an integer(y coordinate):";
	cin>>q;
	cout<<"\n"<<"Enter an integer(x coordinate):";
	cin>>r;
	cout<<"\n"<<"Enter an integer(y coordinate):";
	cin>>s;
	Coord co1(p,q);
	Coord co2(r,s);
	flag=co1==co2;//flag=co1.equals(co2);
	if(flag)
	cout<<"\n"<<"Object values are equal";
	else
	cout<<"\n"<<"Object values are not equal";
	
}
