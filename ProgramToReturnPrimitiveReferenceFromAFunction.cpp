#include<iostream>

using namespace std;

int &fun();
int n;
 
int main()
{
	fun()=250;//n=250;
	cout<<"\n"<<n;	
}

int& fun()
{
	return n;
}

