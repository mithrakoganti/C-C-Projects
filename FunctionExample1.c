#include<stdio.h>
#include<conio.h>

int k;

void test()
{
	k++;
	//printf("\n %d", k);
}

int main()
{
		 k=10;
		test();
		printf("\n %d", k);

}
