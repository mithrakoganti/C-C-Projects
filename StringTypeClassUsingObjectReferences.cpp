#include<iostream>
#include<cstring>

using namespace std;

class Str_Type
{
	char *cp;
	public:
		Str_Type(char *);
		Str_Type(const Str_Type &os, int ex=1);
		~Str_Type()
		{
			delete [] cp;
			cout<<"\n"<<"Object is blowing up";
			
		}
		char* get_Type()
		{
			return cp;
		}
		
};

Str_Type::Str_Type(char *s)
{
	int len;
	len=strlen(s)+1;
	cp = new char[len];
	if(!cp)
	{
		cout<<"\n"<<"No memory available";	
	}	
	strcpy(cp,s);	

}

Str_Type::Str_Type(const Str_Type &os, int ex=1)
{
	int len;
	len=strlen(os.cp)+ex;
	cp = new char[len];
	if(!cp)
	{
		cout<<"\n"<<"No memory available";	
	}	
	strcpy(cp,os.cp);	

}


void show_Str(Str_Type st)
{
	char *s;
	s=st.get_Type();
	cout<<"\n"<<s;
	
}

int main()
{
	char chary1[20], chary2[20];
	cout<<"\n"<<"Enter string 1:";
	cin>>chary1;
	cout<<"\n"<<"Enter string 2:";
	cin>>chary2;
	Str_Type sto1(chary1), sto2(chary2);
	show_Str(sto1);
	show_Str(sto2);
	
}


