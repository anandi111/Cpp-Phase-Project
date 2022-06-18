//14. A window on a side wall have a dimension of 10x4 
//feet. Kaveri wants to apply curtains on that window such 
//that a window will perfectly coverd from all sides with 
//extra 2 feet. Design a C++ UDF with figures out if a 
//given dimensions of curtains satisfies mentioned criteria 
//or not.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void Kaveri()
{
	int l=10, w=4;
	int c;
	
	c=(l*w)+8;
	
	cout<<endl<<" A window on a side wall have a dimension of 10x4 feet."<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<" For Covering Window is: "<<endl;
	cout<<" Kaveri needs "<<c<<" area curtain."<<endl;

}

class curtain
{
	public:
		
		void getdata()
		{
			Kaveri();
		}
};

int main()
{
	curtain c1;
	
	c1.getdata();
	
	return 0;
}
