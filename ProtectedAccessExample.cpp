#include<iostream>

using namespace std;

class Sample {
	int x;
	
	protected:
		int y;
	public:
		int z;
		Sample(int m, int n)
		{
			x=m;
			y=n;
		}
		int get_x()
		{
			return x;	
		}
		int get_y()
		{
			return y;
		}
	
};


int main()
{
	Sample so(5, 6);
	so.z= 7;
	//so.y=4;(y is a protected variable and cannot be accessed from outside the class as it behaves like private)
	//so.x=3;(x is a private variable)
	cout<<"\n"<<so.get_x();
	cout<<"\n"<<so.get_y();
	cout<<"\n"<<so.z;
	
}
