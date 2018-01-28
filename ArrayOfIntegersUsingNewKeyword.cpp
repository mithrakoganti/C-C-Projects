#include<iostream>

using namespace std;

int main()
{
	int *pint, i;
	pint = new int[10];
	if (!pint)
	{
	cout<<"\n"<<"Memory is not allocated";
	return 0;	
	}
	cout<<"\n"<<"Enter the array of integers below:";
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<"Value at index"<<"\t"<<i;
		cin>> *(pint+i);
	}
	cout<<"\n"<<"Integers entered are:";
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<*(pint+i);
	}
	delete pint;	
}

