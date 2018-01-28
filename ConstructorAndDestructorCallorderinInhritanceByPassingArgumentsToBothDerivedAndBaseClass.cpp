#include<iostream>

using namespace std;

class Vehicle
{
	int now;
	int range;	
	public:
		Vehicle(int now, int range)
		{
		this->now=now;
		this->range=range;
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
		Car(int nop, int now, int range):Vehicle(now, range)
		{
			this->nop=nop;
			
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

class Truck:public Vehicle
{
	int load_limit;
	
	public:
		Truck(int load_limit, int now, int range):Vehicle(now, range)
		{
			this->load_limit=load_limit;
			cout<<"\n"<<"Truck object is created";
		}
		~Truck()
		{
			cout<<"\n"<<"Truck object is blowing up";
		}
		void disp_tdetails()
		{
			disp_vdetails();
			cout<<"\n"<<"Load limit of the trcuk :"<<load_limit;
		}	
};

int main()
{

	Car co(5,4,600);
	co.disp_cdetails();
	Truck to(3000,4,1200);
	to.disp_tdetails();
	
	
}
