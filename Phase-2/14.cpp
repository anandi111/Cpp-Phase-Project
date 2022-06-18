//14. Develop a solution for Income Tax Department for 
//identify which person have to pay how much tax basis on 
//his/her income using C++ and pre-defined percentage 
//criteria for tax calculation.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Tax_Department
{
	private:
		int n, t;
		
	public:
		
		Tax_Department()
		{
			
			cout<<endl<<"	Enter Your Income: ";
			cin>>n;
			
		}
		
		void Tax()
		{
			if(n<=200000)
			{
				cout<<endl<<"	---------------------------------------------"<<endl;
				cout<<"	 Don't worry! you don't pay any tax.  "<<endl;
				cout<<"	---------------------------------------------"<<endl;
			}
			else if(n>200000&&n<=500000)
			{
				t = (n-200000)/10;
				
				cout<<endl<<"	---------------------------------------------"<<endl;
				cout<<"	 Your Tax Amount = "<<t<<endl;
				cout<<"	---------------------------------------------"<<endl;
			}
			else if(n>500000&&n<=1000000)
			{
				t = ((n-500000)/10*2)+30000;
				
				cout<<endl<<"	---------------------------------------------"<<endl;
				cout<<"	 Your Tax Amount = "<<t<<endl;
				cout<<"	---------------------------------------------"<<endl;
			}
			else
			{
				t = (((n-1000000)/10)*3)+130000;
				
				cout<<endl<<"	---------------------------------------------"<<endl;
				cout<<"	 Your Tax Amount = "<<t<<endl;
				cout<<"	---------------------------------------------"<<endl;
			}
		}	
};

int main()
{
	Tax_Department t1;
	
	t1.Tax();
	
	return 0;
}
