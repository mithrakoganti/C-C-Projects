#include<iostream>

using namespace std;

int fun();
 
int main()
{
	int n;
	n=fun();
	n=n*5;		
	cout<<"\n"<<n;	
}

int fun()
{
	int n;
	n=5;
	cout<<"\n"<<n;
	return n;
}

