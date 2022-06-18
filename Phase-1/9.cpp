//9. An innocent boy must have to solve that how to raise
//any number(Base) to power N for proving his common
//ability among all classmates. Write a C++ Program to
//provide a solution for this boy.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class maths
{
	private:
		int base, power, ans, i;
		
	public:
		
		maths()
		{
			cout<<endl<<"	Enter Base Number: ";
			cin>>this->base;
			cout<<"	Enter Power or Exponent Number: ";
			cin>>this->power;
		}
		
		void solution()
		{
			for(i=1;i<=power;i++)
			{
				ans *= base;
			}
			
			cout<<endl<<"	ANSWER:"<<endl;
			cout<<"	----------------------------------------"<<endl;
			cout<<"	"<<this->base<<"^"<<this->power<<" = "<<this->ans<<endl;
			cout<<"	----------------------------------------"<<endl;	
		} 
};

int main()
{
	maths m1;
	
	m1.solution();
	
	return 0;
}
