//1. Meena face an isuue to perform a mathematical 
//operation to find a cube of any number. Write a C++ 
//Program which helps Meena to solve her issue.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class operation
{
	private:
		int n,c;
		
	public:
	
		void cube()
		{
			cout<<endl<<"	Enter Number: ";
			cin>>this->n;
			
			this->c=n*n*n;
			
			cout<<endl<<"	====================================="<<endl;
			cout<<"	 * Cube of "<<n<<" is "<<this->c<<endl;
			cout<<"	====================================="<<endl;	
		}	
};

int main()
{
	operation c1;
	
	c1.cube();
	
	return 0;
}
