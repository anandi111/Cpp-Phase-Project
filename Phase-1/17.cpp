//17. Sameer needs to master a technique to find if a given
//number is Prime number or not for his best presentation
//at the Teachers Day to impress his Math teacher. Help
//sameer to Write a C++ Program with best technique.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Sameer
{
	private:
		int n,cou=0,i;
	
	public:
	
		Sameer()
		{
			cout<<endl<<"	Enter any Number: ";
			cin>>this->n;
		}
		
		void Prime()
		{
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					cou++;
				}
			}
			
			if(cou==2)
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	 Number is Prime. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	 Number is not Prime. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}	
		}
};

int main()
{
	Sameer s1;
	
	s1.Prime();
	
	return 0;
}
