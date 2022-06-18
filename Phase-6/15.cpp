//15. Calculate toal coast to apply a Solar Powered Panels
//for your Home Rooftop. Apply all types of government aid
//percentage to find reasonable coast.

#include<iostream>
#include<string.h>
using namespace std;

//Number of Cells	
//72
//Power	
//330 W

class Solar
{
	private:
		int cell, power, prise, d_c=1000, o_c=150, f_c=1500, total;
		
	public:
		
		Solar()
		{
			cout<<endl<<" Enter Number of Cells: ";
			cin>>cell;
			cout<<" Enter Power: ";
			cin>>power;
		}
		
		void getdata()
		{
			if(cell<=70)
			{
				prise=15000;
			}
			else if(cell<=150)
			{
				prise=25000;
			}
			else
			{
				prise=45000;
			}
			
			total=prise+((prise*20)/100)+d_c+o_c+f_c;

			cout<<endl<<"====================================="<<endl;
			cout<<" Total Coast is: "<<prise<<endl;
			cout<<" Total GST is: "<<(prise*20)/100<<endl;
			cout<<" Total Delivary Charge is: "<<d_c<<endl;
			cout<<" Total Other Charge is: "<<o_c<<endl;
			cout<<" Total Fitting Charge is: "<<f_c<<endl;
			cout<<"====================================="<<endl;
			cout<<" Total Coast is: "<<total<<endl;
			cout<<"====================================="<<endl;
			
		}
};

int main()
{
	Solar s1;
	
	s1.getdata();
	
	return 0;
}
