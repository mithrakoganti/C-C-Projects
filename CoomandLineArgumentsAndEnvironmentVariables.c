#include<stdio.h>
#include<conio.h>

int main(int argc, char** argv, char** env)
{
	int i, j=0;
	printf("\n The number of command line arguments are %d", argc);
	printf("\n The command line arguments are:");
	for(i=0;i<argc;i++)
	{
		printf("\n argv[%d]: %s",i, argv[i]);
	}
	printf("\n The environment variables are:");
	while(env[j])
	{
		printf("\n %s", env[i++]);
	}
}
