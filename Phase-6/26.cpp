//26. By using Multilevel Inheritance, implement below 
//mentioned structure in C++ for employee records system.
//Use proper implementation of Encapsulation, static 
//keyword and Inheritance when needed.

#include<iostream>
#include<string.h>
using namespace std;

class P
{
	protected:
		int id;
		char name[100];
		int age;
		int salary;
		int experiance;
		char email[100];
		static char com_name[100];
		char city[100];
		char role[100];
		
	public:
		
		void setdata1()
		{
			cout<<endl<<" Enter Id: ";
			cin>>id;
			cout<<" Enter Name: ";
			fflush(stdin);
			gets(name);
			cout<<" Enter Age: ";
			cin>>age;
		}
		
};

class Q: public P
{
	public:
		
		void setdata2()
		{
			cout<<endl<<" Enter Role: ";
			fflush(stdin);
			gets(role);
			cout<<" Enter Salary: ";
			cin>>salary;
			cout<<" Enter Experiance: ";
			cin>>experiance;
		}
};

class R: public Q
{
	public:
		
		void setdata3()
		{
			cout<<endl<<" Enter Email: ";
			fflush(stdin);
			gets(email);
			cout<<" Enter City: ";
			fflush(stdin);
			gets(city);
		}
		
		void getdata1()
		{
			cout<<endl<<" SHORT INFO: "<<endl;
			cout<<"=================================="<<endl;
			cout<<" Id: "<<id<<endl;
			cout<<" Role: "<<role<<endl;
			cout<<" Salary: "<<salary<<endl;
			cout<<"=================================="<<endl;
		}
};

class S: public R
{
	public:
		
		void getdata2()
		{
			cout<<endl<<" INFO: "<<endl;
			cout<<"=================================="<<endl;
			cout<<" Id: "<<id<<endl;
			cout<<" Name: "<<name<<endl;
			cout<<" Age: "<<age<<endl;
			cout<<" Salary: "<<salary<<endl;
			cout<<" Role: "<<role<<endl;
			cout<<" Experiance: "<<experiance<<endl;
			cout<<" Email: "<<email<<endl;
			cout<<" City: "<<city<<endl;
			cout<<" Company Name: "<<com_name<<endl;
			cout<<"=================================="<<endl;
		}
};

char P::com_name[100]="RNW";

int main()
{
	S s[100];
	int n,i;
	
	cout<<endl<<" Enter How Many Hotel: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].setdata1();
		s[i].setdata2();
		s[i].setdata3();
	}
	
	for(i=0;i<n;i++)
	{
		s[i].getdata1();
		s[i].getdata2();
	}
	
	return 0;
}
