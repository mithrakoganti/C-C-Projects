#include<iostream>

using namespace std;

int main()
{
	cout<<"\n"<<145.89<<" "<<105;
	cout<<"\n"<<25<<" "<<-25;
	cout<<"\n"<<105.0;
	
	cout.unsetf(ios::dec);
	
	cout.setf(ios::hex|ios::scientific);
	cout<<"\n"<<145.89<<" "<<105;
	
	cout.setf(ios::showpos);
	cout<<"\n"<<25<<" "<<-25;
	
	cout.setf(ios::showpoint);
	cout<<"\n"<<105.0;
}
