#include<iostream>

using namespace std;

void fun1(unsigned char ch)
{
	cout<<"\n"<<ch;
	cout<<"\n"<<"From unsigned char";
	
}

void fun1(char ch)
{
	cout<<"\n"<<ch;
	cout<<"\n"<<"From char";
	
}
int main()
{
	fun1('a');
	fun1('b');
	fun1(10);
}
