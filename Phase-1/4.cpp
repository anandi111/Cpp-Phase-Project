//4. Two classmates wants to exchange their seating with 
//each other. But the problem is that there are only two 
//chairs in the small classroom which already aquires by 
//them. Write a C++ Program which provides a solution for 
//this particular problem.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class small_classroom
{
	public:
		int kajal=10;
		int suniti=20;
		
		void exchange()
		{
			kajal += suniti;
			suniti = kajal-suniti;
			kajal = kajal-suniti;
		}
		
};

int main()
{
	small_classroom d1;
	
	cout<<endl<<"  BEFORE:"<<endl;
	cout<<"  ----------------------------------------"<<endl;
	cout<<"  Kajal = "<<d1.kajal<<endl;
	cout<<"  Suniti = "<<d1.suniti<<endl;
	cout<<"  ----------------------------------------"<<endl<<endl;
	
	d1.exchange();
	
	cout<<"  AFTER:"<<endl;
	cout<<"  ----------------------------------------"<<endl;
	cout<<"  Kajal = "<<d1.kajal<<endl;
	cout<<"  Suniti = "<<d1.suniti<<endl;
	cout<<"  ----------------------------------------"<<endl<<endl;
	
	return 0;
}
