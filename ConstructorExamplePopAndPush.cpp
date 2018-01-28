#include<iostream>

using namespace std;
#define SIZE 25


class Stack
{
	
 char sary[SIZE];
 int tos;
 public:
 	Stack();
 	void push_stack(char);
 	char pop_stack();
 	int get_tos();
 	
};

Stack::Stack()

{
	tos=5;			
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

int Stack::get_tos()
{
	return tos;
}


int main()
{
	Stack s1;
	char c;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<"Enter a character into stack 1:";
		cin>>c;
		s1.push_stack(c);
	}
	cout<<"\n"<<"Top of stack is:"<<s1.get_tos();
	s1.pop_stack();
	s1.pop_stack();
		cout<<"\n"<<"Top of stack is:"<<s1.get_tos();
	cout<<"\n"<<"Characters in first stack are:";
	for(i=0;i<7;i++)
	{
		cout<<"\n"<<s1.pop_stack();
	}
	
	
}
	
	
