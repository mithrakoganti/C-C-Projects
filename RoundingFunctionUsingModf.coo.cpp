#include<iostream>
#include<cmath>

using namespace std;

void round_fun(float &);


int main()
{
	float value;
	cout<<"Enter a float type value:";
	cin>>value;
	round_fun(value);
	cout<<"\n"<<"Value after rounding the digits is:"<<value;	
	
}

void round_fun(float &x)
{
	float  fractpart, intpart;
  	fractpart = modf (x , &intpart);
  	if(fractpart>=0.50)
  	{
  		x=intpart+(1.0);
	}
	else
	{
		x=intpart;
	}

}
