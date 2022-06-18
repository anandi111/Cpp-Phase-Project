//2. Develop a solution for Akshay by which he can retrieve 
//factorial of all numbers between given range of two 
//numbers using a C++ user defined function (UDF).

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void factorial()
{
	int n1, n2, fact=1, i;
	
			cout<<endl<<" Enter Starting Number: ";
			cin>>n1;
			cout<<" Enter Ending Number: ";
			cin>>n2;
		
			if(n1<n2)
			{
				for(i=n1;i<=n2;i++)
				{
					fact*=i;
				}
				
				cout<<endl<<"------------------------------------------------"<<endl;
				cout<<" Factorial of "<<n1<<" to "<<n2<<" is: "<<fact<<endl;
				cout<<"------------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"------------------------------------------------------------"<<endl;
				cout<<" Please, Enter Starting Number Less Than Ending Number"<<endl;
				cout<<"------------------------------------------------------------------"<<endl;
			}
}

class Akshay
{
	public:
		
		void fact()
		{
			factorial();
		}
};

int main()
{
	Akshay a1;
	
	a1.fact();
	
	return 0;
}
