//5. The two short sides of a right triangle are 6 cm and 
//13 cm. Find the length of the third side using Pythagoras 
//Theorem with help of C++.

#include<iostream>
#include<string.h>
using namespace std;

class math
{
	private:
		int f=6, s=13, c, d, temp=0;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" First Side is "<<f<<"cm."<<endl;
			cout<<" First Side is "<<s<<"cm."<<endl;
		}
		
		void getdata()
		{
			d=(f*f)+(s*s);
			
			c = d/ 2;
			while(c!=temp)
			{
			temp = c;
			c = (d/temp + temp)/2;
			}

			
			cout<<endl<<"------------------------------------------------------------"<<endl;
			cout<<" So, Third Side is: "<<c<<endl;
			cout<<"------------------------------------------------------------"<<endl;
		}
};

int main()
{
	math m1;
	
	m1.setdata();
	m1.getdata();
		
	return 0;
}
