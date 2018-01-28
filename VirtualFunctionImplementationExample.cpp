#include<iostream>

using namespace std;

class Animal
{
		char type[10];
		public:
			virtual void make_sound()
			{
				cout<<"\n"<<"Generic sound";
			}
			virtual int fun(int i, float f)
			{
				int r=i+(int)f;
				return r;	
			}
}; 

class Dog:public Animal
{
	public:
		void make_sound()
		{
			cout<<"\n"<<"Bark!!  ";
		}
		 int fun(int i, float f)
		{
			int r=i*(int)f;
			return r;	
		}
};

int main()
{
	Animal oa;
	Dog od;
	Animal *pa;
	pa=&oa;
	pa->make_sound();
	pa=&od;
	pa->make_sound();
	

}
