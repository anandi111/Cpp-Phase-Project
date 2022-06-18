//3. Write a C++ Program to solve this mathematical 
//equation to find out write answer for passing math’s 
//exam: 2(x-3)=4x-1

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class mathematical
{
	private:
		int x;
		int ans1, ans2;
		
	public:
	
		mathematical()
		{
			cout<<endl<<"	Enter Value of X: ";
			cin>>this->x;
			cout<<endl;
		}
		
		void solution()
		{
			ans1 = 2*(x-3);
			ans2 = 4*(x-1);
			
			if(ans1 == ans2)
			{
				cout<<"	---------------------------------------------------"<<endl;
				cout<<"	2*(x-3) = "<<ans1<<endl;
				cout<<"	4*(x-1) = "<<ans2<<endl;
				cout<<"	Equation proves right."<<endl;
				cout<<"	---------------------------------------------------"<<endl;	
			}
			else
			{
				cout<<"	---------------------------------------------------"<<endl;
				cout<<"	2*(x-3) = "<<ans1<<endl;
				cout<<"	4*(x-1) = "<<ans2<<endl;
				cout<<"	Equation proves Wrong."<<endl;
				cout<<"	---------------------------------------------------"<<endl;	
			}
			
		}	
}; 

int main()
{
	mathematical m1;
	
	m1.solution();
	
	return 0;
}
