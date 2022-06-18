//9. Design a GST Calculator in C++ to find total TAX on
//various types of categorized items. Apply proper types of
//Indian GST TAX varients based on different types of
//Goods. GST have been divided into four GST rates – 5%,
//12%, 18%, and 28% by the GST Council.

#include<iostream>
#include<string.h>
using namespace std;

class GST
{
	private:
		int p,g,t_p;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Prise: ";
			cin>>p;
		}
		
		void getdata()
		{
			if(p<500)
			{
				g=(p*5)/100;
			}
			else if(p>=500&&p<=1000)
			{
				g=(p*12)/100;
			}
			else if(p>=1000&&p<=2000)
			{
				g=(p*18)/100;
			}
			else 
			{
				g=(p*28)/100;
			}
			
			t_p=p+g;
			
			cout<<endl<<"---------------------------------------------"<<endl;
			cout<<" Total GST Prise is: "<<g<<endl;
			cout<<" Included GST Prise is: "<<t_p<<endl;
			cout<<"---------------------------------------------"<<endl;
		}
};

int main()
{
	GST g1;
	
	g1.setdata();
	g1.getdata();
	
	return 0;
}
