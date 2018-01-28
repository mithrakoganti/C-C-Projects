#include<iostream>

using namespace std;

class Array
{
	int size;
	int *ap;
	public:
		Array(int);
		Array(const Array &ar);
		~Array();
		void put_Num(int, int);
		int get_Num(int);
		
};

Array::Array(int sz)
{
	size=sz;
	ap = new int[size];
	
	if(!ap)
	{
		cout<<"\n"<<"Memory not allocated";
	}
	
	cout<<"\n"<<"Invoking normal constructor";
	
}

Array::Array(const Array &ar)
{
	size=ar.size;
	ap = new int[size];//Allocating memory for copy
	
	if(!ap)
	{
		cout<<"\n"<<"Memory not allocated";
	}
	for(int i=0;i<ar.size;i++)
	{
		ap[i]=ar.ap[i];//Copying contents 
	}
	cout<<"\n"<<"Invoking copy constructor";
}

Array::~Array()
{
	delete [] ap;
	cout<<"\n"<<"Array object is blowing up";
}

void Array::put_Num(int ind, int x)
{
	if(ind>=0&&ind<size)
	{
	 ap[ind]=x;
	}
	 
}

int Array::get_Num(int ind)
{
	
	return ap[ind];
}


int main()
{
	int i, as, ele;
	cout<<"\n"<<"Enter size of the array:";
	cin>>as;
	Array ao(as);
	cout<<"\n"<<"Inputting array elements:";
	for(i=0;i<as;i++)
	{
		cout<<"\n"<<"Enter an integer element at index " <<i<<":";
		cin>>ele;
		ao.put_Num(i,ele);
	}
	cout<<"\n"<<"Array elements are:";
	
	for(i=0;i<as;i++)
	{
		cout<<"\n"<<ao.get_Num(i);
	}
	
	Array aox = ao;	
	cout<<"\n"<<"Array elements of new object are:";
	for(i=0;i<as;i++)
	{
		cout<<"\n"<<aox.get_Num(i);
	}
}
