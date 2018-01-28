//Check whether a given number is palindrome or not

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,temp, rev_num=0;
	printf("Enter an integer:");
	scanf("%d", &n);
	temp=n;
	
	while(n>0)
	{
	rev_num=rev_num*10+n%10;
		n=n/10;
	}
	
	printf("Number after reversing the digits = %d", rev_num);
	if(temp==rev_num)
	printf("\n Palindrome");
	else
	printf("\n Not a Palindrome");
}
