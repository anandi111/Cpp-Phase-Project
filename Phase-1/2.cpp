//2. Sameer is too weak to find multiplication of any three 
//numbers. Write a C++ Program which helps Sameer to solve 
//his issue.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class calculate
{
	private:
		int n1,n2,n3,m;
		
	public:
		
		void multiplication()
		{
			cout<<endl<<"	Enter First Number: ";
			cin>>this->n1;
			cout<<"	Enter Second Number: ";
			cin>>this->n2;
			cout<<"	Enter Third Number: ";
			cin>>this->n3;
			
			m=n1*n2*n3;
			
			cout<<endl<<"	====================================="<<endl;
			cout<<"	 * multiplication of "<<this->n1<<" * "<<this->n2<<" * "<<this->n3<<" is "<<this->m<<endl;
			cout<<"	====================================="<<endl;
		}
		
};

int main()
{
	calculate m1;
	
	m1.multiplication();
	
	return 0;
}
