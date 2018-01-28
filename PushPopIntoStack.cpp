#include<iostream>

using namespace std;
#define SIZE 25


class Stack
{
	
 char sary[SIZE];
 int tos;
 public:
 	void init_stack();
 	void push_stack(char);
 	char pop_stack();
 	
};

void Stack::init_stack()
{
	tos=0;			
}

void Stack:: push_stack(char ch)
{
		
	if(tos==SIZE)
	{
		cout<<"\n"<<"Stack is full";
		return;
	}
	sary[tos]=ch;
	tos++;
}

char Stack:: pop_stack()
{
	char ch;
	if(tos==0)
	{
		cout<<"\n"<<"Stack is empty";
		return 0;
	}
	
	tos--;
	return sary[tos];
	
}


int main()
{
	Stack s1, s2;
	char c;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<"Enter a character into stack 1:";
		cin>>c;
		s1.push_stack(c);
	}
	
		for(i=0;i<5;i++)
	{
		cout<<"\n"<<"Enter a character into stack 2:";
		cin>>c;
		s2.push_stack(c);
	}
	s1.pop_stack();
	s1.pop_stack();
	
	cout<<"\n"<<"Characters in first stack are:";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<s1.pop_stack();
	}
	
	cout<<"\n"<<"Characters in second stack are:";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<s2.pop_stack();
	}
	
}
	
	
