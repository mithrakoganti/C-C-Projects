#include<iostream>

using namespace std;

double rectArea(double len)
{
	double area;
	area = len*len;
	return area;
}

double rectArea(double len, double bre)
{
	double area;
	area = len*bre;
	return area;
}

int main()
{
	double l,b;
	cout<<"\n"<<"Enter length of the rectangle:";
	cin>>l;
	cout<<"\n"<<"Enter breadth of the rectangle:";
	cin>>b;
	cout<<"\n"<<"Area of square is:"<<rectArea(l);
	cout<<"\n"<<"Area of rectangle is:"<<rectArea(l,b);
		
}
