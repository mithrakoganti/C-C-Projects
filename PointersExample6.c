#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10,b=20, *p, *q;
	p=&a;
	q=&b;
	printf("\n p= %d", p);
	//p=-q; Illegal use of pointers-Invalid
	p=p-b;//Valid
	//p=p-q;Non-portable Conversion-Invalid
	
	p = (int *)(p-q);//Explicit type casting makes it valid
  	//Non portable pointer conversion-Invalid 	p=p-q-a;
	p=(int *)(p-q)-a;//Valid
	//Invalid pointer additionp=p+q; p=p+q;
	//Invalid pointer addition;p=p+q+a;
	//Invalid since two pointer addresses can never be added even after explicit type casting p=(int *)(p+q)+a;
	//Invalid -Illegal use of pointers p=p*q;
	//Invalid -Illegal use of pointers p=p/q;
	//Invalid -Illegal use of pointers p=p*a;
	//Invalid -Illegal use of pointers p=p/b;
	//Invalid -Illegal use of pointers p=a/p;
	
	
	
	
	printf("\n p= %d", p);
	p=p+a;
	printf("\n p= %d", p);
	// Non-portable pointer conversion warning p=a;
	
}