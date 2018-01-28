#include<iostream>
#include<cstring>

using namespace std;

class Cake;

class Icecream
{
	char flavor[20];
	public:
		Icecream(char[]);
		~Icecream()
		{
			cout<<"\n"<<"Icecream object is blowing up";
		}
		friend char* get_flavor();
};


class Cake
{
	char flavor[20];
	public:
		Cake(char[]);
		~Cake()
		{
				cout<<"\n"<<"Cake object is blowing up";	
		}
		void set_flavor(int x)	
			{	
		    	switch(x)
		    	{
		    		case 1: strcpy(flavor,"Strawberry");
		    		break;
		    		case 2: strcpy(flavor,"Butterscotch");
		    		break;
		    		case 3: strcpy(flavor,"Pineapple");
		    		break;
		    		default:
		    		strcpy(flavor,"Chocolate");
				}
				
			}
			char* get_flavor()
			{
				return flavor;
			}
			
};

Icecream::Icecream(char iflavor[20])
{
	strcpy(flavor, iflavor);
}

Cake::Cake(char cflavor[20])
{
	strcpy(flavor, cflavor);
}

int main()
{
	char flavor[20];
	cout<<"\n"<<"Enter your flavor of choice(Strawberry, Pineapple, Chocolate or Butterscotch";
	cin>>flavor;
	Cake c1(flavor);
	Icecream i1(flavor);
	cout<<"\n"<<"Icecreamflavor is:";
	cout<<c1.get_flavor();
}
	



