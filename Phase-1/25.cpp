//25. By using an easy technique, Write a C++ program to 
//Find Largest Number among four numbers to help Prisha 
//boost-up her confidence in logical building process.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Prisha
{
	private:
		int n[4];
		int i,j=1;
		
	public:
		
		Prisha()
		{
			for(i=0;i<4;i++)
			{
				cout<<endl<<"	"<<j<<". Enter Number: ";
				cin>>this->n[i];
				j++;
			}
		}
		
		void Largest()
		{
			for(i=0;i<4;i++)
			{
				if(n[i]>n[0])
				{
					n[0]=n[i];
				}
			}
			
			cout<<endl<<"	---------------------------------------"<<endl;
			cout<<"	   Largest Number is "<<this->n[0]<<endl;
			cout<<"	---------------------------------------"<<endl;
		}	
}; 

int main()
{
	Prisha p1;
	
	p1.Largest();
	
	return 0;
}
