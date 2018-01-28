#include<iostream>

using namespace std;

int main()
{
	int *pint;
	//pint = new int;
	if (!pint)
	{
	cout<<"\n"<<"Memory is not allocated";
	return 0;	
	}
	*pint=5;
	cout<<"\n"<<"Value at pint is:"<<*pint;
	delete pint;	
}

