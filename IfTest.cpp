#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string password = "hello";
	
	cout<<"\n"<<"Enter your password:"<<flush;
	string input;
	cin>>input;
	
	if(input==password)
	{
		cout<<"\n"<<"Correct password"<<endl;
		
	}
	
	if(input!=password)
	{
		cout<<"\n"<<"Incorrect password!! Please try again."<<endl;
	}
}
