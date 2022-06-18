//1. Kashyap has difficulty to remember multiplication 
//tables. Write a C++ Program which generates 
//multiplication tables between n1 and n2 provided values.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Kashyap
{
	private:
		int n1, n2;
		int i, j;
		
	public:
		Kashyap()
		{
			cout<<endl<<"	Enter Starting Point: ";
			cin>>this->n1;
			cout<<"	Enter Ending Point: ";
			cin>>this->n2;
			cout<<endl;	
		}
		
		void tables()
		{
			if(n1<n2)
			{
			
				cout<<"	---------------------------------------------------"<<endl;
				for(i=n1;i<=n2;i++)
				{
					for(j=1;j<=10;j++)
					{
						cout<<"	"<<i<<" * "<<j<<" = "<<i*j<<endl;
					}
					cout<<endl;
				}
				cout<<"	---------------------------------------------------"<<endl;
			}
			else
			{
				cout<<"	Please Enter starting point less than ending point....";
			}
		}	
};

int main()
{
	Kashyap k1;
	
	k1.tables();
	
	return 0;
}
