#include<stdio.h>
#include<conio.h>

void nextFib();

int main()
{
	int n,i;
	printf("Enter number of terms:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
 {
 	nextFib();
 }

}

void nextFib()
{
 static int t1=0, t2=1;
 int nt;
 nt=t1+t2;
 printf("\n %d",t1);
 	t1=t2;
 	t2=nt; 
}

