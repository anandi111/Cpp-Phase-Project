//10. List of some historical words by some famous 
//Philosopher has been written in his diary. But all that 
//words are only can be read if we put that word in front 
//of mirror. So write a C++ program to design it.

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class String
{
	private:
		char a[100], b[100];
		int c=0,t=0, i, j;
		
	public:
		
		String()
		{
			cout<<endl<<" Enter historical words: ";
			fflush(stdin);
			gets(a);
		}
		
		void solution()
		{
			
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Actual Word is: "<<strrev(a)<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};

int main()
{
	String s1;
	
	s1.solution();
	
	return 0;
}
