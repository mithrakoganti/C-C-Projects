#include<iostream>
#include<string.h>
//**No error even after removing string.h header file
using namespace std;

class Color
{
	char Value[15];
	public:
		void set_Value(int);
		char* get_Value();
		char get_Type();
			
};
void Color:: set_Value(int x)	
{	
	switch(x)
	{
		case 1: strcpy(Value,"Black");
			break;
		case 2: strcpy(Value,"Blue");
			break;
		case 3: strcpy(Value,"Brown");
		    break;
		default:strcpy(Value,"White");
	}
}

char* Color:: get_Value()
{
	return Value;
}

char Color ::get_Type()
{
	return 'c';
}

class Dog 
{	
	public:
		Color c;
		
		void  set_Color(int);
		char * get_Color();
		char get_Type();
};
void Dog:: set_Color(int n)
{
	c.set_Value(n);
	
}

char*Dog:: get_Color()
{
	return c.get_Value();
		
}
char get_Type()
{
	return 'd';
}

int main()
{
	Dog dg;
	int n;
	cout<<"\n"<<"Enter 1 or 2 or 3 to set color of the dog:";
	cin>>n;
	dg.set_Color(n);
	cout<<"\n"<<"Dog Color is:"<< dg.get_Color();
	
}
