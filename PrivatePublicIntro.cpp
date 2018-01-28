#include<stdio.h>
#include<conio.h>
#include<string.h>

class Student {
	
	 int sid;
	char sname[40];
	
	public :
	
	int smarks;
	int sage;
	
	private:
	
	char sgender[6];
	
	public:
	void accept_Std()
	{
		printf("\n Enter student id_no:");
		scanf("%d",	&sid);
		printf("\n Enter student name:");
		scanf(" %s", sname);
		printf("\n Enter student marks:");
		scanf("%d",	&smarks);
		printf("\n Enter student age:");
		scanf("%d",	&sage);
		printf("\n Enter student gender:");
		scanf(" %s", sgender);
		
	}


	void display_Std()
	{
		printf("\n Student details are listed below:\n");
		printf("\n Student name = %s", sname);
		printf("\n Student Id_no = %d", sid);
		printf("\n Student marks = %d", smarks);
		printf("\n Student age = %d", sage);
		printf("\n Student gender = %s", sgender);
		
	}

};

void modify_Std(Student st)
{
//printf("%d", st.sid);
printf("\n %d", st.sage);	
}	


int main()
{
	
	Student std;
	std.accept_Std();
	std.display_Std();
	modify_Std(std);
	
}

