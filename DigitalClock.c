#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int hour,min,sec;
	printf("Enter hours:");
	scanf("%d",&hour);
	printf("Enter minutes:");
	scanf("%d",&min);
	printf("Enter seconds:");
	scanf("%d",&sec);
	while(!kbhit())
	{
	gotoxy(10,10);
	printf("%2d %2d %2d", hour,min,sec);
	sec++;
	if(sec==60)
	{
		min++;
		sec=0;
		if(min==60)
		{
			hour++;
			min=0;
			
		}
		
		
	}
	delay(1000);	
	}
}