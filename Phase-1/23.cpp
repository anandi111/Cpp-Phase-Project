//23. By writing a logic for checking if a given number is 
//Armstrong or Not, Mayur will be qualified for an entrance 
//exam. Write a C++ Program for Mayur to qualify.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Mayur
{
	private:
		int n,d,j;
		int i=0,m;
		int count=0,sum=0;
		int a[100];
		
	public:
		
		Mayur()
		{
			cout<<endl<<"	Enter Number: ";
			cin>>this->n;
			m=n;
		}
		
		void check()
		{
			while(n!=0)
			{
				d=n%10;
				a[i]=d;
				i++;
				n=n/10;
				count++;
			}
			for(j=0;j<count;j++)
			{
//				cout<<a[j]<<endl;
				sum = sum + ( a[j]*a[j]*a[j] );
			}

			if(m==sum)
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   Yes, Number is Armstrong."<<endl;
				cout<<"	---------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   No, Number is not Armstrong."<<endl;
				cout<<"	---------------------------------------"<<endl;	
			}
		}
};

int main()
{
	Mayur m1;
	
	m1.check();
	
	return 0;
}
