//14. Calculate an Electricity Bill of a House of one month
//based on total units burned. Develop a C++ solution for
//this calculation.

#include<iostream>
#include<string.h>
using namespace std;

class Electricity_Bill
{
	private:
		int u, t, Total;
		
	public:
		
		Electricity_Bill()
		{
			cout<<endl<<" Enter Total Units: ";
			cin>>u;
		}
		
		void getdata()
		{
			if (u <= 100) 
			{ 
				t=(u*5);
			} 
			else if (u <= 200) 
			{ 
				t=((u-100)*6)+500;
			} 
			else if (u <= 300) 
			{ 
				t=((u-200)*7)+1100;
			} 
			else if (u > 300) 
			{
				t=((u-300)*8)+1800;
			}
			
			Total=((t*20)/100)+t;
			
			cout<<endl<<"-----------------------------------------------------"<<endl;
			cout<<" Your Total Bill is: "<<Total<<endl;
			cout<<"-----------------------------------------------------"<<endl;

		}	
};

int main()
{
	Electricity_Bill e1;
	
	e1.getdata();
	
	return 0;
}
