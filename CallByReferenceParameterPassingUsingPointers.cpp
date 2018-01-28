#include<iostream>

using namespace std;

void fun(int *);

int main()
{
	int n=5;
	fun(&n);
	cout<<"\n"<<"Result is:"<<n;
	
}

void fun(int *x)
{
	*x=(*x)*10;
}
