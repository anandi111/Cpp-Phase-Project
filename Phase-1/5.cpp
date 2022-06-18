//5. Two college collegues had argue with a ASCII value 
//conversion method. Write a C++ Program which provides a 
//solution for their issue.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class ASCII
{
	private:
		char c;
		
	public:
		
		void conversion()
		{
			cout<<endl<<"	Enter character: ";
			cin>>c;
			cout<<endl<<"	---------------------------------------"<<endl;
			cout<<"	 ANCII value of "<<c<<" is "<<int(c)<<endl;
			cout<<"	---------------------------------------"<<endl;
		}
};

int main()
{
	ASCII c1;
	
	c1.conversion();
	
	return 0;
}
