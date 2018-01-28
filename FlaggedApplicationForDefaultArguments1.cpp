#include<iostream>
#include<cstring>

using namespace std;

const int ignore = 0;
const int upper  = 1;
const int lower = 2;

void print(char *sp, int flag=-1)
{
	static int oldcase = ignore;
	
	if (flag<0)
	{
		flag = oldcase;
	}
	while(*sp)
	{
		switch(flag)
		{
			case upper: cout<<(char)toupper(*sp);
			break;
			case lower: cout<<(char)tolower(*sp);
			break;
			default : cout<<*sp;
			
		}
		sp++;
		
	}
	oldcase = flag;
}

int main()
{
	print("Love life \n", ignore);	
	print("Love life \n", upper);
	print("Love life \n");	
	print("Love life \n", lower);
	print("never ending.. \n");
	
}
