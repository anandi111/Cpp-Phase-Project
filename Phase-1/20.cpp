//20. A Teacher give a punishment to all students to find 
//reverse numbers of given 3 random numbers by logically 
//under 15 minutes. Write a C++ Program to provide a 
//solution for this problem.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class maths
{
	private:
		int n,rev,d;
	
	public:
	
		maths()
		{
			cout<<endl<<"	Enter any Number: ";
			cin>>this->n;
		}
		
		void reverse()
		{
			while(n!=0)
			{
				d=n%10;
				rev=rev*10+d;
				n=n/10;
			}
			
			cout<<endl<<"	---------------------------------------"<<endl;
			cout<<"	  REVERSE => "<<this->rev<<endl;
			cout<<"	---------------------------------------"<<endl;
		}	
};

int main()
{
	maths m1;
	
	m1.reverse();
	
	return 0;
}
