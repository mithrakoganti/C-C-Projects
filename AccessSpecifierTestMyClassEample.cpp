#include<iostream>

using namespace std;


class MyClass
{
	int x=1;
	
	public:
		int y=1;
	
		void memFun()
		{
			x=5;//Need not create an object to access private variables inside the member function.
			y=5;	
		}
	//x=5;--->Gives an error since this is outside any function
};

void outFunc()
{
	MyClass mco;
	//mco.x=10;
	mco.y=10;
}


int main()
{
	
}


