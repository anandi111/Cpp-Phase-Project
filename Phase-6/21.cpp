//21. Build a C++ solution which returns array of all ASCII 
//values of alphabets skipping 3 characters. Use concept of 
//Constructors. After returning that array, find addition 
//of that values and decide whether it is a odd or even 
//number.

#include<iostream>
#include<string.h>
using namespace std;

class characters
{
	private:
		char i;
		int n=0;
	
	public:
		
		characters()
		{
			cout<<endl;
			for(i='a';i<='z';i+=3)
			{
				n+=int(i);
				cout<<" Word "<<i<<" = "<<int(i)<<endl;
			}
			
		}
		
		void solution()
		{
			cout<<endl<<"-------------------------------------------------"<<endl;
			cout<<" Total is: "<<n<<endl;
			cout<<"-------------------------------------------------"<<endl;
			
			if(n%2==0)
			{
				cout<<endl<<" Even....."<<endl;
			}
			else
			{
				cout<<endl<<" Odd....."<<endl;
			}
		}
};

int main()
{
	characters c1;
	
	c1.solution();
	
	return 0;
}
