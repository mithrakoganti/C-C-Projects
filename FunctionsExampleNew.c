#include<stdio.h>
#include<conio.h>



int main()
{
fun1();	
}

void fun1()
{
 fun2();	
}

void fun2()
{
	fun3();
}
void fun3()
{
	int i,j,k;
	i=90;
	j=9;
	k=i*j;
	printf("\n %d",k);

	
}