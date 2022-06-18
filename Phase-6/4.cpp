//4. Build a C++ system which predict a total profit of a Cashew Company
//in Goa. If this company sells 1,23,500 piece of cashews in 1 month, then it
//generates total of 78,000 in a month. Help this company by producing 10X
//more cashews in 3 months and display total revenue with increment
//percentage.

#include<iostream>
#include<string.h>
using namespace std;

class Cashew
{
	private:
		int c=123500, rs=78000, s_c , amt , p;
		
	public:
		
		void sell()
		{
			s_c = c*10;
			
			amt = rs*10;
			
			p = ((s_c*100)/c)/3;
		}
		
		void getdata()
		{
			sell();
			
			cout<<endl<<" This Company should Producing "<<s_c<<" Cashew."<<endl;
			
			cout<<endl<<"------------------------------------------------------------"<<endl;
			cout<<" Total Revenue with increment percentage is: "<<p<<"%"<<endl;
			cout<<"------------------------------------------------------------"<<endl;
		}
};

int main()
{
	Cashew c1;
	
	c1.getdata();
	
	return 0;
}

