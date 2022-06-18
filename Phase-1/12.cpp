//12. A math teacher wants to teach how to find a Simple
//Interest. Write a C++ Program to provide a solution for
//this.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class maths
{
	private:
		int prize, rate, net, s_i;
			
	public:
		
		maths()
		{
			cout<<endl<<"	Enter Total Amount: ";
			cin>>this->prize;
			cout<<"	Enter Rate: ";
			cin>>this->rate;
			cout<<"	Enter Total Time(Months): ";
			cin>>this->net;
		}
		
		void Simple_Interest()
		{
			s_i = ( prize*rate*net ) / 100;
			
			cout<<endl<<"	SIMPLE INTEREST:"<<endl;
			cout<<"	--------------------------------"<<endl;
			cout<<"	total simple interest = "<<this->s_i<<endl;
			cout<<"	--------------------------------"<<endl;
		}	
};

int main()
{
	maths m1;
	
	m1.Simple_Interest();
	
	return 0;
}
