#include<iostream>

using namespace std;

void fun1(int a=1, int b=1)
{
	cout<<"\n"<<"a:"<<a;
	cout<<"\n"<<"b:"<<b;
}

void fun2(int x, int y)
{
	cout<<"\n"<<"x:"<<x;
	cout<<"\n"<<"y:"<<y;
	
}

void fun3(int x=1, int y) /* ***Error in the statement- since once a default argument is specified to a parameter, 
				all the parameters following that specific parameter must have defaults as well*/
{
	cout<<"\n"<<"x:"<<x;
	cout<<"\n"<<"y:"<<y;	
}

int main()
{
	fun1();	
	fun1(5);
	fun1(5,10);
//	fun2();
//	fun2(5);
	fun2(5,10);
/*	fun3();
	fun3(5);
	fun3(5,10);
	*/
	
}
