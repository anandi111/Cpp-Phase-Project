//27. Reserve Bank of India pre-defines a Rate of Interest 
//(ROI) for all banks across the Nation. But some private 
//sector banks can apply different ROI. Use inheritance and 
//polymorphism concept to illustrate this scenario

#include<iostream>
#include<string.h>
using namespace std;

class RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" Pre-defines a Rate of Interest is: 7%"<<endl;
		}
};

class BOB:public RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" BOB"<<endl;
			cout<<"============================================"<<endl;
			cout<<" Pre-defines a Rate of Interest is: 7%"<<endl;
		}
};

class Baroda:public RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" BARODA"<<endl;
			cout<<"============================================"<<endl;
			cout<<" Pre-defines a Rate of Interest is: 8%"<<endl;
		}
};

class Varachha:public RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" VARACHHA"<<endl;
			cout<<"============================================"<<endl;
			cout<<" Pre-defines a Rate of Interest is: 7.5%"<<endl;
		}
};

int main()
{
	BOB b1;
	Baroda b2;
	Varachha v1;
	
	b1.Interest();
	b2.Interest();
	v1.Interest();
	
	return 0;
}
