//24. By writing a logic for checking if a given string is 
//Palindrom or Not, Apexa will be qualified for an entrance 
//exam. Write a C++ Program for Apexa to qualify.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Apexa
{
	private:
		char c[100],com[100];
		int i, flag=0;
		
	public:
		
		Apexa()
		{
			cout<<endl<<"	Enter any Massage: ";
			cin>>this->c;
		}
		
		void check()
		{
			strcpy(com, c);
			
			strrev(com);
			
			if(strcmp(c,com)==0)
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   Yes, String is Palindrome."<<endl;
				cout<<"	---------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   No, String is not Palindrome."<<endl;
				cout<<"	---------------------------------------"<<endl;
			}
		}
};

int main()
{
	Apexa a1;
	
	a1.check();
	
	return 0;
}
