//24. Design a swapping program using only constructors for 
//helping Devansh to gain passing marks in examination.

#include<iostream>
#include<string.h>
using namespace std;

class Marks
{
	private:
		int a,b;
		
	public:
		
		Marks()
		{
			cout<<endl<<" Enter Original Marks: ";
			cin>>a;
			cout<<" Enter Mark Which You Want Replace with Original Marks: ";
			cin>>b;
			
			a+=b;
			b=a-b;
			a=a-b;
			
			cout<<endl<<" RESULT: "<<endl;
			cout<<"========================================="<<endl;
			cout<<" Original Mark is: "<<a<<endl;
			cout<<" Fake Mark is: "<<b<<endl;
			cout<<"========================================="<<endl;
		}
};

int main()
{
	Marks m1;
	
	return 0;
}
