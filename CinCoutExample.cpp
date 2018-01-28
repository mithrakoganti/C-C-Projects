#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>

using namespace std;

class Dog {
	
	public:
		
		char dName[25];
		char dBreed[25];
		char dColor[10];
		
	private:
		
		int dAge;
		char dGender[6];
		
	public:
		
		void dog_Details()
		{
			cout<<"Enter Dog name:";
			cin>>dName;
			cout<<"Enter Dog Breed:";
			cin>>dBreed;
			cout<<"Enter Dog Color:";
			cin>>dColor;
			cout<<"Enter Dog Age:";
			cin>>dAge;
			cout<<"Enter Dog Gender:";
			cin>>dGender;
			
		}
		};
		
		void dog_Bark(Dog d, int n)
		{	
			int i;
			cout<<"\n"<< d.dName<< "is barking:";
			for(i=0;i<n;i++)
			{
		 	cout<<"\n" <<"Woof! Woof!";
			}
		}	


int main()
{
	Dog dg;
	dg.dog_Details();
	dog_Bark(dg,5);
}
