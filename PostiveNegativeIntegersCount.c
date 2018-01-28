//count positive and negative numbers from a sequence of numbers given by user

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, pcount=0, ncount=0, sum=0;
	while(1)
	{
		printf("Enter an integer [0 at the end]:");
		scanf("%d", &n);
		sum=sum+n;
		if(n>0)
		pcount++;
		if(n<0)
		ncount++;
		if(n==0)
		break;
		
	}
	
    printf("\n pcount= %d", pcount);
	printf("\n ncount= %d \n sum =%d", ncount, sum);	
}