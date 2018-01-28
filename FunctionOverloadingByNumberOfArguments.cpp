#include<iostream>

using namespace std;

void date_fun(int m, int d, int y)
{
	cout<<"\n"<<"Date is:"<<m<<"/"<<d<<"/"<<y;
}

void date_fun (char *dp)
{
 cout<<"\n"<<"Date as string is:"<<dp;//Prints entire string pointed by dp;
 //cout<<"\n"<<"Date as string is:"<<*dp;Prints the first character of the string pointed by dp;
}


int main()
{
int mon, date, year;
cout<<"\n"<<"Enter an integer(month):";
 cin>>mon;
 cout<<"\n"<<"Enter an integer(date):";
 cin>>date;
 cout<<"\n"<<"Enter an integer(year):";
 cin>>year;
 date_fun(mon, date, year);
 date_fun("11/18/2017");	
}
