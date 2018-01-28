//fibonacci series


#include<stdio.h>
#include<conio.h>
int main()
{
	int t1=0,t2=1,n,next_term=0,i=1;
	printf("Enter number of terms:");
	scanf("%d", &n);
	//printf("\t %d",t1);
//	printf("\t %d",t2);
	while(i<=n){
		printf("\t %d", t1);
		next_term=t1+t2;
		t1=t2;
		t2=next_term;
		i++;	
	}
}