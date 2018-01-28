#include<iostream>

using namespace std;

void count()
{
	static int a=0;
	a++;
	cout<<"\n"<<a;
}

int main()
{
	count();
	count();
	count();
}
