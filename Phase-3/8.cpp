//8. Build a C++ program which detects if a given word
//contains any vowels or not. And if it contains, then
//count how many total vowels are present and which they
//are. Also returns average value of total vowels� ASCII
//values�. Based on that average value, decide word�s
//level!
// If 10<=average<=1 , then a word is �SMOO"HER
// If 1 <average<=30, then a word is �SOBER
// If average>=30, then a word is �HARER
// If average==0, then a word is �GORGEOUS�

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class String
{
	private:
		char a[100];
		int c=0, sum=0, i, ave;
		
	public:
		
		String()
		{
			cout<<endl<<" Enter Massage: ";
			fflush(stdin);
			gets(a);
		}
		
		void solution()
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
				   a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
				{
				   	c++;
				   	sum += int(a[i]);
				}
				
			}
			
			ave = sum/c;
			
			cout<<endl<<"--------------------------------------------"<<endl;
			cout<<" Total vowels are present in massage is: "<<c<<endl;
			cout<<" Average value of total vowels� ASCII values is: "<<ave<<endl;
			cout<<"--------------------------------------------"<<endl;
			
			cout<<endl<<"Word Level is: "<<endl;
			cout<<"====================================="<<endl;
			if(ave==0)
			{
				cout<<"GORGEOUS"<<endl;
			}
			else if(ave>=30)
			{
				cout<<"HARER"<<endl;
			}
			else if(1 <ave&&ave<=30)
			{
				cout<<"SOBER"<<endl;
			}
			else if(10<=ave&&ave>=1)
			{
				cout<<"SMOOHER"<<endl;
			}
		}
};

int main()
{
	String s1;
	
	s1.solution();
	
	return 0;
}
