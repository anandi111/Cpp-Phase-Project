//21. Priya wants to teach his newly enrolled boy that how 
//to find number of Digits in any number. Write a C++ 
//Program to provide a solution for this problem.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class priya
{
	private:
		int n,count=0;
		
	public:
		
		priya()
		{
			cout<<endl<<"	Enter any Number: ";
			cin>>this->n;
		}	
		
		void digits()
		{
			while(n!=0)
			{
				n=n/10;
				count++;
			}
			
			cout<<endl<<"	--------------------------------"<<endl;
			cout<<"	| Total Number in Digit is "<<this->count<<"   |"<<endl;
			cout<<"	--------------------------------"<<endl;
			
		}
};

int main()
{
	priya p1;
	
	p1.digits();
	
	return 0;
}
