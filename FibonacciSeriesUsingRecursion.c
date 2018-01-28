#include<stdio.h>
#include<conio.h>
 
void fibSeries(int, int, int);
 

int main()
{
	int n, result;
	printf("Enter number of terms:");
	scanf("%d", &n);
	fibSeries(0,1,n);
	
} 
void fibSeries(int t1, int t2, int n)

{
	if(n<1)
	return;
	printf("\n %d", t1);
//	printf("\n %d", t2);
	
//	printf("\n %d", next_term);

	
 	fibSeries(t2, t1+t2, n-1);
		  
	 
		
}