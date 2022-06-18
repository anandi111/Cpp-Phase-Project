//13. Design an EMI Calculator for deciding accurate EMI 
//price of ex-showroom car models to help an executive to 
//easily guide his consumers. Use C++ to build this type of 
//system.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class car
{
	private:
		int amt, month;
		
	public:
		
		car()
		{
			cout<<endl<<"	Enter Total Amount: ";
			cin>>amt;
			cout<<"	Enter Total Months: ";
			cin>>month;
		}
		
		void EMI()
		{
			cout<<endl<<"	---------------------------------------------"<<endl;
			cout<<"	 Your Monthly EMI = "<<double(amt/month)<<endl;
			cout<<"	---------------------------------------------"<<endl;
		}	
};

int main()
{
	car c1;
	
	c1.EMI();
	
	return 0;
}
