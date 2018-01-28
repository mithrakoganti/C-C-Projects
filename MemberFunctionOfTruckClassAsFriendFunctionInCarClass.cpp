#include<iostream>

using namespace std;

class Car;//forward declaration mechanism-declaring a class before it is used

class Truck
{
	float tspeed;
	float tweight;
	public:
		Truck(float, float);
		~Truck()
		{
			cout<<"\n"<<"Truck object is blowing up";
		}
		 float compare_Speed(Car);
};


class Car
{
	float cspeed;
	int cpass;
	public:
		Car(float, int);
		~Car()
		{
				cout<<"\n"<<"Car object is blowing up";	
		}
		friend float Truck:: compare_Speed(Car);
		
};

Truck::Truck(float tspeed, float tweight)
{
	this->tspeed=tspeed;
	this->tweight=tweight;
}

Car::Car(float cspeed, int cpass)
{
	this->cspeed=cspeed;
	this->cpass=cpass;	
}

float Truck:: compare_Speed(Car c)
{
	return c.cspeed-tspeed;
}

int main()
{
	Car c1(60.0, 4);
	Truck t1(80.0, 100.0);
	cout<<"\n"<<"Comparing Car c1 and Truck t1";
	float sd = t1.compare_Speed(c1);
	if(sd>0)
	{
		cout<<"\n"<<"Car is moving faster than truck";
	}
	
	else if(sd<0)
	{
		cout<<"\n"<<"Truck is moving faster than car";
	}
	
	else
	{
		cout<<"\n"<<"Both are moving with same speed";
	}
	
	
}



