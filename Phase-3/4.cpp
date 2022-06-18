//String Programs
//4. A Refugee camp have shortage of registering refugees 
//which are coming from Afghanistan. So registration team 
//split up their register documents in two teams: One note 
//down first name along with passport id, another one note 
//down last name along with that passport id. Now while 
//entering that all data as a final stage, a Computer 
//operator needs a system which automatically merge first 
//name and last name togather as per reference of passport 
//id. So design this type of system in C++ to help that 
//Refugee camp.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String
{
	private:
		char name[100], l_name[100], passport[100], fullname[100];
		int a,b,c;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter First name: ";
			cin>>name;
			cout<<" Enter Last name: ";
			cin>>l_name;
			cout<<" Enter Passport ID: ";
			cin>>passport;
		}
		
		void getdata()
		{
			strcpy(fullname, strcat(name,l_name));
			
			cout<<endl<<endl<<"======================================="<<endl;
			cout<<" \t\tINFORMATION"<<endl;
			cout<<"======================================="<<endl;
			cout<<" Full Name: "<<fullname<<endl;
			cout<<" Passport ID: "<<passport<<endl;
			cout<<"======================================="<<endl;
		}
};

int main()
{
	String s1;
	
	s1.setdata();
	
	s1.getdata();
	
	return 0;
}
