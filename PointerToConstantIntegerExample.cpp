#include<iostream>

using namespace std;

int main()
{
	int x=5;
	const int* pci;
	pci=&x;
	cout<<"\n"<<*pci;
	*pci =10;
	cout<<"\n"<<*pci;
	
}

