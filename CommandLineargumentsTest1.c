#include<stdio.h>
#include<conio.h>

int main(int argc, char** argv)
{
	int i;
	printf("\n The number of command line arguments are %d", argc);
	for(i=0;i<argc;i++)
	{
		printf("\n argv[%d]: %s",i, argv[i]);
	}
	
}
