//6. An IT company wants to generate random number of 6 
//digits long and send it to its employees. Write a C++ 
//Program to help this IT company.

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;

class IT_company
{
	private:
		int a,b,c,d,e,f,i;
		
	public:
		
		void random_number()
		{
				i=rand();
//				cout<<"	Employee random no is "<<a<<b<<c<<endl;	
				cout<<i;
		}	
}; 

int main()
{
	IT_company e[100];
	int e_n,i;
	
	cout<<endl<<"	Enter How Many Employee: ";
	cin>>e_n;
	cout<<endl;
	
	cout<<"	-----------------------------------------------"<<endl;
	for(i=0;i<e_n;i++)
	{
		e[e_n].random_number();
		cout<<endl;
	}
	cout<<"	-----------------------------------------------"<<endl;
	

	return 0;
}
