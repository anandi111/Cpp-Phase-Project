//16. Two friends are playing a game in which they have to
//check whether a given number is Even or Odd. Help them to
//Write a C++ Program for that.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Help
{
	private:
		int n;
	
	public:
	
		Help()
		{
			cout<<endl<<"	Enter any Number: ";
			cin>>this->n;
		}
		
		void identify()
		{
			if(n%2==0)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	 Number is Even. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else 
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	 Number is Odd. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}	
		}	
};

int main()
{
	Help h1;
	
	h1.identify();
	
	return 0;
}
