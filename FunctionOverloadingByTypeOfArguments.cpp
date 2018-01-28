#include<iostream>

using namespace std;

int abs(int x)
{
	cout<<"\n"<<"In int abs:";
	return x<0 ? -x : x;// conditional operator
}

float abs(float x)
{
	cout<<"\n"<<"In float abs:";
	return x<0 ? -x : x;// conditional operator
}

long abs(long x)
{
	cout<<"\n"<<"In long abs:";
	return x<0 ? -x : x;// conditional operator
}





int main()
{
cout<<"\n"<<"Absolute value of -10 is:"<<abs(-10);
cout<<"\n"<<"Absolute value of -10.0 is:"<<abs(-10.0f);
cout<<"\n"<<"Absolute value of -10L is:"<<abs(-10L);
	
}
