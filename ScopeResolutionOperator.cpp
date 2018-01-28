#include<stdio.h>
#include<conio.h>
#include<string.h>

class Dog {
	
	public:
		
		char dName[25];
		char dBreed[25];
		char dColor[10];
		
	private:
		
		int dAge;
		char dGender[6];
		
	public:
		
		void dog_Details();
		
	};
		
		void Dog::dog_Details()
		{
			printf("Enter Dog name:");
			scanf(" %s", dName);
			printf("Enter Dog Breed:");
			scanf(" %s", dBreed);
			printf("Enter Dog Color:");
			scanf(" %s", dColor);
			printf("Enter Dog Age:");
			scanf("%d", &dAge);
			printf("Enter Dog Gender:");
			scanf(" %s", dGender);
			
		}
		void dog_Bark(Dog d, int n)
		{	
			int i;
			printf("\n %s is barking:", d.dName);
			for(i=0;i<n;i++)
			{
		 	printf("\n Woof! Woof!");
			}
		}	


int main()
{
	Dog dg;
	dg.dog_Details();
	dog_Bark(dg,5);
}
