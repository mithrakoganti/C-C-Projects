#include<iostream>
#include<string.h>

using namespace std;

class Animal
{
	char aName[20];
	char aType[20];
	public:
		void accept_animal(char cName[], char cType[])
		{
			strcpy(aName, cName);
			strcpy(aType, cType);	
		}
		
		void disp_animal()
		{
			cout<<"\n"<<"Animal Name:"<<aName;
			cout<<"\t"<<"Animal Type:"<<aType;
		}
		
		
};

class Dog:public Animal
{
	char dName[20];
	int dAge;
	public:
		void dog_behaviour()
		{
			cout<<"\n"<<"Dog barks";
		}
	
};

class Tiger:public Animal{
	char tName[20];
	int tage;
	public:
		void tiger_behaviour()
		{
			cout<<"\n"<<"Tiger roars";
		}
	
}; 


int main()
{
	char name[20], type[20];
	Dog dog;
	Tiger tig;
	cout<<"\n"<<"Enter name of the animal:";
	cin>>name;
	cout<<"\n"<<"Enter type of the animal:";
	cin>>type;
	cout<<"\n"<<"Enter dog details:";
	dog.accept_animal(name, type);
	cout<<"\n"<<"Enter tiger details:";
	tig.accept_animal(name, type);
	cout<<"\n"<<"Printing dog details:";
	dog.disp_animal();
	cout<<"\n"<<"Printing tiger details:";
	tig.disp_animal();
	dog.dog_behaviour();
	tig.tiger_behaviour();
		
}
