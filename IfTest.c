#include<iostream>

using namespace std;

int main()
{
	string password = "hello;

	cout<"\n"<<"Enter your password";
	string input;
	cin>>input;
	
	if(input==password)
	{
		cout<<"\n"<<"Correct password";
		
	}
	
	if(input!=password)
	{
		cout<<"\n"<<"Incorrect password!! Please try again."
	}
}
