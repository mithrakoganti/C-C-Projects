#include<iostream>

using namespace std;

int main()
{
	int *pint;
	pint = new int;
	*pint=5;
	cout<<"\n"<<"Value at pint is:"<<*pint;	
}

