//27. Create a addition logic to find sum of all digits of 
//a given number to surpass a very challenging dream of 
//Tanmay. Write a C++ program to develop this system for 
//Tanmay.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Tanmay
{
	private:
		int n,sum=0,d,i,j;
		int a[100];
		int count=0;
		
	public:
		
		Tanmay()
		{
			cout<<endl<<"	Enter Number: ";
			cin>>this->n;
		}
		
		void sum_all_digit()
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
				sum += a[j];
			}
			
			cout<<endl<<"	---------------------------------------"<<endl;
			cout<<"	   Sum of all Element = "<<sum<<endl;
			cout<<"	---------------------------------------"<<endl;
		}	
};

int main()
{
	Tanmay t1;
	
	t1.sum_all_digit();
	
	return 0;
}
