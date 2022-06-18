//11. Raman have an idea to impress his Computer Teacher by
//solving Square Root of a number without using any
//programming library. Write a C++ Program to help Raman.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Raman
{
	private:
		int n;
		float squre,temp=0;
		
	public:
		
		Raman()
		{
			cout<<endl<<"	Enter Number for Square Root: ";
			cin>>n;
		}
		
		void Square_Root()
		{
			squre=n/2;
			
			while(squre!=temp)
			{
			temp = squre;
			squre = (n/temp + temp)/2;
			}
			
			cout<<endl<<"--------------------------------------------"<<endl;
			cout<<" Squre Root of "<<n<<" is: "<<squre<<endl;
			cout<<"--------------------------------------------"<<endl;
		}	
};

int main()
{
	Raman r1;
	
	r1.Square_Root();
	
	return 0;
}
