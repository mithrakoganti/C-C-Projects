#include<iostream>

using namespace std;
#define SIZE 25


class Stack
{
	
 char sary[SIZE];
 int tos;
 public:
 	Stack(int);
 	Stack();
 	void push_stack(char);
 	char pop_stack();
 	int get_tos();
 	
};

Stack::Stack()
{
	//tos=0;
			
}


Stack::Stack(int tos)
{
	cout<<"\n"<<"Instant tos value is:"<<this->tos;
	cout<<"\n"<<"Local tos value is:"<<tos;
	this->tos=tos;
			
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
	int stop;
	cout<<"\n"<<"Enter top of stack value:";
	cin>>stop;
	Stack s1(stop), s2;
	char c;
	int i,n;
	cout<<"\n"<<"Enter number of characters into the stack:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<"Enter a character into stack 1:";
		cin>>c;
		s1.push_stack(c);
	}
	cout<<"\n"<<"Top of stack is:"<<s1.get_tos();
	
	cout<<"\n"<<"Characters in first stack are:";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<s1.pop_stack();
	}
	
	
}
	
	
