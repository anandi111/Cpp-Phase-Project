//15. Aaryan is constantly trying to Check Whether a
//character is Vowel or Consonant. But for some unknown
//reason he just cannot remember difference between vowel
//and consonant. Write a C++ Program to provide a better
//solution to Aaryan.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Aaryan
{
	private:
		char c;
	
	public:
	
		Aaryan()
		{
			cout<<endl<<"	Enter any Character: ";
			cin>>this->c;
		}
		
		void identify()
		{
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Character is Vowel. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}
			else 
			{
				cout<<endl<<"	--------------------------------"<<endl;
				cout<<"	Character is Constant. "<<endl;
				cout<<"	--------------------------------"<<endl;
			}	
		}
};

int main()
{
	Aaryan a1;
	
	a1.identify();
	
	return 0;
}
