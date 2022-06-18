//14. Gaurav must have to teach his little 5 years old baby
//to check whether a given year is leap year or not. Write
//a C++ Program to provide a solution for Gaurav.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Gaurav
{
	private:
		int y;
	
	public:
	
		Gaurav()
		{
			cout<<endl<<"	Enter any Year: ";
			cin>>this->y;
		}
		
		void identify()
		{
			if(y%4==0)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Year is Leap. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else if(y%100==0)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Year is Leap. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else if(y%400==0)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Year is Leap. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Year is not Leap. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			
		}
};

int main()
{
	Gaurav g1;
	
	g1.identify();
	
	return 0;
}
