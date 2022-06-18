//19. Write a C++ program to Print Table of any Number less 
//than 10. A group of needy newbie math students will 
//appriciate your help for your help.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class maths
{
	private:
		int n,i;
		
	public:
		
		maths()
		{
			cout<<endl<<"	Enter any Number: ";
			cin>>this->n;
		}
		
		void table()
		{
			cout<<endl<<"	=========================="<<endl;
			cout<<"	>>>>>>>>TABLE OF "<<n<<"<<<<<<<<<"<<endl;
			cout<<"	=========================="<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<"	||	"<<n<<" * "<<i<<" = "<<n*i<<"	||"<<endl;
			}
			cout<<"	=========================="<<endl;
		}
};

int main()
{
	maths m1;
	
	m1.table();
	
	return 0;
}
