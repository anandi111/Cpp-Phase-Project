//2. A Math problem to find average of all even numbers 
//from n Natural numbers raise difficulty to all 5th 
//standard students. Write a C++ Program to help them.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Math_problem
{
	private:
		int n, ave;
		int i, sum=0, count;
		
	public:
		
		Math_problem()
		{
			cout<<endl<<"	Enter Ending Point: ";
			cin>>this->n;
			cout<<endl;
		}
		
		void average()
		{
			for(i=1;i<n;i++)
			{
				if(i%2==0)
				{
					sum += i;
					count++;
				}
			}
			
			ave = sum/count;
			
			cout<<"	---------------------------------------------------"<<endl;
			cout<<"	Average of All Even Number between 1 to "<<n<<" = "<<this->ave<<endl;
			cout<<"	---------------------------------------------------"<<endl;	
		}
};

int main()
{
	Math_problem m1;
	
	m1.average();
	
	return 0;
}
