#include<iostream>

using namespace std;

void fun(int );

int main()
{
	int n=8;
	fun(n);
	cout<<"\n"<<"Result in main is:"<<n;
	
}

void fun(int x)
{
	x=(x)*10;
	cout<<"\n"<<"Result in fun is:"<<x;
}
