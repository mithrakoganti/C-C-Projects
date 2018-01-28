#include<iostream>

using namespace std;

void pfun(int *p)
{
	cout<<"\n"<<*p;
	
}
void rfun(int &r)
{
	cout<<"\n"<<r;
	
}

int main()
{
	int x;
	cout<<"\n"<<"Enter an integer value for x:";
	cin>>x;
	pfun(&x);
	rfun(x);
	
}
