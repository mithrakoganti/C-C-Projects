#include<iostream>

using namespace std;

int add(int x, int y)
{
	return (x+y);
}

int add(int x, int &y)
{
	return (x+y);
}
int main()
{
	int a=5,b=3;
	cout<<"\n"<<add(a,b);
		
}
