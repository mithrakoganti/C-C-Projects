#include<iostream>

using namespace std;

void swap(int &, int &);

int main()
{
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	swap(a,b);
	cout<<"Values after swapping are:";
	cout<<a<<" "<<"and"<<" "<<b;
	
}

void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	
}
