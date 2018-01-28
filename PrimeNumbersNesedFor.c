#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	int flag;
	
	for(i=2;i<=100;i++)
	{
		flag=1;
	 for(j=2;j<i;j++)
	 {
	 	if(i==2)
	 	{
	 	break;
	 	}
 		if(i%j==0)
 		{
	 	flag=0;
 		break;	
 		}
 		
 	}
 		if(flag==1)
		printf("\n %d", i);
	 	
	}
	
}