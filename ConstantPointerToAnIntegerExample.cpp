#include<iostream>

using namespace std;

int main()
{
	int x=5, y=10;
	int* const cpi = &x;
	cout<<"\n"<<*cpi;
	//cpi=&y;
	*cpi= 20;
	cout<<"\n"<<*cpi;
	int xary[]={2,3,5,7,9};
	int* const cpia=xary;
	cout<<"\n"<<*cpia;
	//cout<<"\n"<<*(cpia++);	
}
