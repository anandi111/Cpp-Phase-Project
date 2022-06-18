//6. Design a system for “Dare to Win” game scenario. In 
//this game, two participants have to guess any situation 
//or work which he/she wants to be done by opposition 
//player. So both player write their itended dare works and 
//now a system will swap that both dare works and provide 
//that to other opposite players. Write a C++ program to 
//help swapping that dare works.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String
{
	private:
		char a[100], b[100], c[100], name1[100], name2[100];
	
	public:
	    String()
		{
			cout<<endl<<" Enter Your name: ";
			cin>>name1;
			cout<<" Enter Dare 1: ";
			fflush(stdin);
			gets(a);
			
			cout<<endl<<" Enter Your name: ";
			cin>>name2;
			cout<<" Enter Dare 2: ";
			fflush(stdin);
			gets(b);
		}
		
		void solution()
		{
			strcpy(c, b);
			strcpy(b, a);
			strcpy(a, c);
			
			cout<<endl<<"================================================"<<endl;
			cout<<" Dare for "<<name1<<" is "<<a<<endl;
			cout<<"======================================================"<<endl;
			
			cout<<endl<<"======================================================"<<endl;
			cout<<" Dare for "<<name2<<" is "<<b<<endl;
			cout<<"======================================================"<<endl;
		}
};

int main()
{
	String s1;
	
	s1.solution();
	
	return 0;
}
