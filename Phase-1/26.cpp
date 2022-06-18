//26. Develop a simple comparision system which identify if 
//given number is Palindrome or not. By this system, a bank 
//employee will appriciate your help. Write a C++ program 
//for developing this system

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Number
{
	private:
		int n,rev,d,m;
		
	public:
		
		Number()
		{
			cout<<endl<<"	Enter Number: ";
			cin>>this->n;
			m=n;
		}
		
		void Palidrome()
		{
			while(n!=0)
			{
				d=n%10;
				rev=rev*10+d;
				n=n/10;
			}
			
			if(m==rev)
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   Yes, Number is Palindrome."<<endl;
				cout<<"	---------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   No, Number is not Palindrome."<<endl;
				cout<<"	---------------------------------------"<<endl;	
			}
		}
};

int main()
{
	Number n1;
	
	n1.Palidrome();
		
	return 0;
}
