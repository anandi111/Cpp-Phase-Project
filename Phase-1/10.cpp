//10. A brand new smart device which meant to convert total
//provided Days Into Years, Weeks and Days. But for some
//technical interruption, that device stops working
//properly. Write a C++ Program to provide a solution for
//this.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class smart_device
{
	private:
		int n,year,months,days,a,b,c;
		
	public:
		
		smart_device()
		{
			cout<<endl<<"	Enter Total Days: ";
			cin>>this->n;
		}
		
		void converter()
		{
			year = n/365;
			a = n%365;
			months = a/30;
			b = a%30;
			days = b;
			
			cout<<endl<<"	--------------------------------"<<endl;
			cout<<"	Year : Months : Days = "<<this->year<<" : "<<this->months<<" : "<<this->days<<endl;
			cout<<"	--------------------------------"<<endl;
		}
};

int main()
{
	smart_device d1;
	
	d1.converter();
	
	return 0;
}
