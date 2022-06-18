//12. Nishant trapped in a cyber game, in which he only 
//gets some random amount of seconds for determining at 
//which exact time he has to leave that game. Wite a C++ 
//program which converts that seconds into HH:MM:SS format.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Nishant
{
	private:
		int n, h, a, m, s;
	
	public:
		
		Nishant()
		{
			cout<<endl<<"	Enter Total Seconds: ";
			cin>>n;
		}
		
		void solution()
		{
			h = n/3600;
			a = n%3600;
			m = a/60;
			s = a%60;
			
			cout<<endl<<"	---------------------------------------------"<<endl;
			cout<<"	Total Time = "<<h<<" : "<<m<<" : "<<s<<endl;
			cout<<"	---------------------------------------------"<<endl;
		}	
};

int main()
{
	Nishant n1;
	
	n1.solution();
	
	return 0;
}
