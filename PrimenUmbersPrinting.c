#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,num=50, count=0;
	for(i=2;i<=num;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}

	if(count==0)
	{
		printf("\n %d", i);
	}
	
}
	
	
}
