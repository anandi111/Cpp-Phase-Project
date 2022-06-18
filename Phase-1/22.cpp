//22. Write a C++ Program to find Fibonacci Series upto N 
//numbers to help Darshan by passing fastest-finger first 
//round for entering Coding Quiz competition.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Darshan
{
	private:
		int n,i,n1=0,n2=1,n3;
		
	public:
		
		Darshan()
		{
			cout<<endl<<"	Enter Ending Point: ";
			cin>>this->n;
		}
		
		void f_s()
		{
			cout<<endl<<"	-------------------------------------------------------------"<<endl;
			cout<<"	 Fibonacci Series = 0, 1,";
			for(i=1;i<=n;i++)
			{
				n3 = n1+n2;
				cout<<" "<<n3<<",";
				n1 = n2;
				n2 = n3;
			}
			cout<<endl<<"	-------------------------------------------------------------"<<endl;
		}	
};

int main()
{
	Darshan d1;
	
	d1.f_s();
	
	return 0;
}
