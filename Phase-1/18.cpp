//18. Tushar is trying very hard to teach his classmate
//Harsh that how to find Factorial of a Number. Write a C++
//Program for Tushar with best possibe technique.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Tushar
{
	private:
		int n,fact=1,i;
	
	public:
	
		Tushar()
		{
			cout<<endl<<"	Enter any Number: ";
			cin>>this->n;
		}
		
		void Factorial()
		{
			for(i=1;i<=n;i++)
			{
				fact=fact*i;;
			}
			
			cout<<endl<<"	--------------------------------"<<endl;
			cout<<"	 Factorial = "<<fact<<endl;
			cout<<"	--------------------------------"<<endl;	
		}	
};

int main()
{
	Tushar t1;
	
	t1.Factorial();
	
	return 0;
}
