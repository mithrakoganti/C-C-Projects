#include<stdio.h>
#include<conio.h>

int main()
{
	int iary[]={2,3,5,7,9},i;
	printf("\n Array Base=%d", iary);
	printf("\n 1st at %d 1st=%d",iary+0, *(iary+0));
	printf("\n 4th at %d 4th=%d",iary+3, *(iary+3));
	
	for(i=0;i<5;i++)
	{
	 printf("\n %dth at %d %dth=%d",i,iary+i,i,*(iary+i));	
	}
}