#include<iostream>
#include<string.h>

using namespace std;

class Animal
{
	char aname[20];
	char atype[20];
	int  anum;
 
public:
	Animal();
	~Animal();
	Animal(char[], char[], int);	
	void disp_Animal();
	
	
};
Animal::Animal()
{

}

Animal::Animal(char cname[], char ctype[], int cnum)
{
	strcpy(aname, cname);
	strcpy(atype, ctype);
	anum=cnum;	
}

Animal::~Animal()
{
	cout<<"\n"<<"Animal Object is blowing up";
}

void Animal::disp_Animal()
{
	cout<<"\n"<<"Animal Name:"<<aname;
	cout<<"\t"<<"Animal Type:"<<atype;
	cout<<"\t"<<"Number of animals:"<<anum;
}




int main()
{
	
	char name[20], type[20];
	int num,i,n;
	cout<<"\n"<<"Enter the total number of animals:";
	cin>>n;
	Animal aary[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<"Enter animal name:";
		cin>>name;
		cout<<"\n"<<"Enter animal type:";
		cin>>type;
		cout<<"\n"<<"Enter number of animals:";
		cin>>num;
		aary[i]=Animal(name, type, num);	
	}
	for(i=0;i<n;i++)
	{
	aary[i].disp_Animal();
	cout<<"\n";
   	}				 
	
	
 
}
