#include<iostream>

using namespace std;

int add (int x, int y)
{
	int isum;
	isum= x+y;
	return isum;
	
}

float  add(float x, float y)
{
	float fsum;
	fsum= x+y;
	return fsum;
}


int main()
{
 int a, b;
 float p,q;
 cout<<"\n"<<"Enter an integer(a value):";
 cin>>a;
 cout<<"\n"<<"Enter an integer(b value):";
 cin>>b;
 cout<<"\n"<<"Enter a float type value(p value):";
 cin>>p;
 cout<<"\n"<<"Enter a float type value(q value):";
 cin>>q;
 cout<<"\n"<<"Sum of two integer values is:"<<add(a,b);
  cout<<"\n"<<"Sum of two integer values is:"<<add(p,q);
 
 
 
 
	
}
