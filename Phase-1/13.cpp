//13. A fourth standard student forced by his teacher to
//identify if a given Character is Uppercase, Lowercase,
//Digit or Special Character. Write a C++ Program to help
//that student.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class student
{
	private:
		char c;
	
	public:
	
		student()
		{
			cout<<endl<<"	Enter any Character: ";
			cin>>this->c;
		}
		
		void identify()
		{
			if(c>='a'&&'z'>=c)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Character is Lowercase. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else if(c>='A'&&'Z'>=c)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Character is Uppercase. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else if(c>='0'&&'9'>=c)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Character is Digit. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Character is Special Character. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}	
		}	
};

int main()
{
	student s1;
	
	s1.identify();
	
	return 0;
}
