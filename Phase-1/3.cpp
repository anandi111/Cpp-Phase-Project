//3. A student in a fifth class encounters a very easy math 
//problem to find quotient and remainder. Write a C++ 
//Program which provides a solution for this particular 
//problem.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class solution
{
	private:
		int d1,d2,q,r;
		
	public:
		
		void data()
		{
			cout<<endl<<"	Enter Divided Number: ";
			cin>>this->d1;
			cout<<"	Enter Divisor Number: ";
			cin>>this->d2;
		}
		
		void quotient()
		{
			q = d1/d2;
			
			cout<<endl<<"	====================================="<<endl;
			cout<<"	 * Quotient of "<<this->d1<<" / "<<this->d2<<" is "<<this->q<<endl;
			cout<<"	====================================="<<endl;
		}
		
		void remainder()
		{
			r = d1%d2;
			
			cout<<endl<<"	====================================="<<endl;
			cout<<"	 * Remainder of "<<d1<<" / "<<d2<<" is "<<this->r<<endl;
			cout<<"	====================================="<<endl;
		}	
};

int main()
{
	solution s1;
	
	s1.data();
	s1.quotient();
	s1.remainder();
	return 0;
}


