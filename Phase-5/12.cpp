//12. Two buses(Bus B1 & Bus B2) head forwards from Mumbai 
//to Kolkata. Both of them have to cover total distance of 
//1933 KM. Bus B1 reached on destination with total time of 
//40 Hr & Bus B2 takes total time of 46 Hr. Find out 
//velocity of both buses using a C++ UDF.

#include<iostream>
using namespace std;

void velocity()
{
	int b1,b2;
	int d=1933,t1=40,t2=46;
	
	b1=d/t1;
	b2=d/t2;
	
	cout<<endl<<" Velocity of"<<endl;
	cout<<"================================================"<<endl;
	cout<<" Bus b1 = "<<b1<<endl;
	cout<<" Bus b2 = "<<b2<<endl;
}

class Bus
{
	public:
		
		void getdata()
		{
			velocity();
		}
};

int main()
{
	Bus b1;
	
	b1.getdata();
	
	return 0;
}
