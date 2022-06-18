//12. Prince wants to create a 24 Hr time convertor app in
//C++. In this app, user can provide any 24 Hr time he/she
//wants but output must be produced in 12 Hr format.
//For example,
//i/p: 15 Hr, 32 Minutes
//o/p: 3:32 PM

#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	private:
		int t1, m1;
		
	public:
		
		Time()
		{
			cout<<endl<<" Enter Hours( 24 Hr ):";
			cin>>t1;
			cout<<endl<<" Enter Minutes( 24 Hr ):";
			cin>>m1;
		}
		
		void getdata()
		{
			if(t1<=12)
			{
				cout<<endl<<"----------------------------------------------"<<endl;
				cout<<" Time ( 12 Hr )= "<<t1<<" : "<<m1<<endl;
				cout<<"----------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"----------------------------------------------"<<endl;
				cout<<" Time ( 12 Hr )= "<<t1-12<<" : "<<m1<<endl;
				cout<<"----------------------------------------------"<<endl;
			}
		}
};

int main()
{
	Time t1;
	
	t1.getdata();
	
	return 0;
}
