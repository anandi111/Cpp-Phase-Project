//7. Ajay has to find Fibonacci Series upto given number to
//successfully pass in Math�s examination. Help him by
//designing a UDF in C++.

#include<iostream>
using namespace std;

void f_s()
{
	int n,d,sum=0,i,n1=0,n2=1,n3;
	
	cout<<endl<<" Enter Number: ";
	cin>>n;
	
	cout<<endl<<"----------------------------------------------------------"<<endl;
	cout<<" Fibonacci Series is : 0, 1, ";
	
	for(i=1;i<n;i++)
	{
		n3=n1+n2;
		cout<<n3<<" , ";
		n1=n2;
		n2=n3;
	}
	
	cout<<endl<<"----------------------------------------------------------"<<endl;
}

class Fibonacci_Series
{
	public:
		
		void number()
		{
			f_s();
		}
};

int main()
{
	Fibonacci_Series f1;
	
	f1.number();
	
	return 0;
}
