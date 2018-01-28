#include<iostream>

using namespace std;

class MyClass1
{
	public:
		MyClass1();
		MyClass1(const MyClass1 &mco);
		MyClass1 fun1();
		
};

MyClass1::MyClass1()
{
	cout<<"\n"<<"Invoking normal constructor";
}

MyClass1::MyClass1(const MyClass1 &mco)
{
	cout<<"\n"<<"Invoking copy constructor";	
}

MyClass1 MyClass1::fun1()
{
	MyClass1 mco1;
	return mco1;
	
}


MyClass1 fun2()
{
	MyClass1 mco2;
	return mco2;
	
}

int main()
{
	MyClass1 mc;
	mc=mc.fun1();
	mc=fun2();
}
