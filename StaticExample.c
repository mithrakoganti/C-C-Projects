#include<stdio.h>
#include<conio.h>
void count();

int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		count();
	}
}
void count()
{
	static int cnt=0;
	printf("\n %d", cnt);
	cnt++;
}