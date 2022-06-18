//8. A sport coach needs to convert submitted participants’
//inches into feet and inches for height measurement. Write
//a C++ Program to provide a solution for this.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class participants
{
	private:
		int i,n,j;
		float feet;
		int inch[100];
		
	public:
		
		void setdata()
		{
			cout<<endl<<"	Enter How Many Student: ";
			cin>>this->n;
			
			for(i=0,j=1;i<n;i++,j++)
			{
				cout<<"	student"<<j<<" height(inches):";
				cin>>this->inch[i];
			}	
		}
		
		void inches_feet()
		{
			cout<<endl<<"	FEET:"<<endl;
			cout<<"	----------------------------------------"<<endl;
			for(i=0,j=1;i<n;i++,j++)
			{
				feet=inch[i]/12;
				cout<<"	student"<<j<<" height(feet):"<<this->feet<<endl;
			}
			cout<<"	----------------------------------------"<<endl;	
		}
		
		void inches()
		{
			cout<<endl<<"	INCHES:"<<endl;
			cout<<"	----------------------------------------"<<endl;
			for(i=0,j=1;i<n;i++,j++)
			{
				cout<<"	student"<<j<<" height(inches):"<<this->inch[i]<<endl;
			}
			cout<<"	----------------------------------------";
		}	
}; 

int main()
{
	participants p1;
	
	p1.setdata();
	p1.inches_feet();
	p1.inches();
	
	return 0;
}
