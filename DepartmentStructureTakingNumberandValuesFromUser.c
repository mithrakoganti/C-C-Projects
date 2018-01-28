#include<stdio.h>
#include<conio.h>

struct Employee {
	int eid;
	char ename[40];
	float esalary;
	int eage;
	char egender[6];
};

int main()
{
	int i,n;
	printf("\n Enter the number of employees:");
	scanf("%d", &n);
	struct Employee eary[10];
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of Employee %d:", i+1);
		scanf(" %s", eary[i].ename);
		
		printf("\n Enter the id_no of Employee %d:",i+1);
		scanf("%d", &eary[i].eid);
		
		 printf("\n Enter the salary of Employee %d:",i+1);
   		 scanf("%f", &eary[i].esalary); 
   		 
   		printf("\n Enter the age of Employee %d:",i+1);
    	scanf("%d", &eary[i].eage); 
    	
    	   
		printf("\n Enter the gender of Employee %d:",i+1);
		scanf("%s", eary[i].egender); 
	}
		
		
		printf("\n Employees list is displayed below:\n");
		printf("\n Name \t \t Id_No \t \t salary \t \t age \t \t gender");
		printf("\n ---- \t \t ----- \t \t ------ \t \t --- \t \t ------");
		
		for(i=0;i<n;i++)
		{
			printf("\n %s \t  %d \t \t %f \t \t %d \t \t %s", eary[i].ename, eary[i].eid, eary[i].esalary, eary[i].eage, eary[i].egender);
		}
}
