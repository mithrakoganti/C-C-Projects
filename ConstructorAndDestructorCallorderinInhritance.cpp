#include<iostream>

using namespace std;

class Vehicle
{
	protected:
	int now;
	int range;
	public:
		Vehicle()
		{
			now=0;
			range=0;
			cout<<"\n"<<"Vehicle object is created";
					
		}
		~Vehicle()
		{
			cout<<"\n"<<"Vehicle object is blowing up";	
		}
	void disp_vdetails()
	{
			cout<<"\n"<<"No. of wheels:"<<now;
			cout<<"\n"<<"Range:"<<range;
	 } 
		
};

class Car:public Vehicle
{
	int nop;
	
	public:
		Car()
		{
			nop=5;	
			now=4;
			range=600;
			cout<<"\n"<<"Car object is created";
		}
		~Car()
		{
			cout<<"\n"<<"Car object is blowing up";
		}
		void disp_cdetails()
		{
		//	cout<<"\n"<<"No. of wheels:"<<now;
			//cout<<"\n"<<"Range:"<<range;
			disp_vdetails();
			cout<<"\n"<<"No. of passengers:"<<nop;
		
	
		}	
	
};


int main()
{
	Car co;
	co.disp_cdetails();
	
}
