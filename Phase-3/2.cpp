//2. Design a system in which if a length of a String is
//greater than 3 and less than 9, then it returns reverse
//of that string. Otherwise, it returns lsum of each
//letters’ ASCII vaue. Use C++ for building this type of
//system.

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class System
{
	public:
		char a[100],b[100];
		int count=0, i, sum=0;
		
	public:
		
		System()
		{
			cout<<endl<<"Enter Any Msg: ";
			fflush(stdin);
			cin>>a;
		}
		
		void solution()
		{
			for(i=0;a[i] != '\0';i++)
			{
				count++;
			}
			
			if(count>=3&&count<=9)
			{
				strcpy(a,b);
				cout<<endl<<endl<<"------------------------------------------"<<endl;
				printf("Reverce of Msg: %s\n",strrev(a));
				cout<<"------------------------------------------"<<endl;
			}
			else
			{     
				for(i=0;a[i]!='\0';i++)
				{
					sum += int(a[i]);
				}
				cout<<endl<<endl<<"------------------------------------------"<<endl;
				cout<<"sum of each letters’ ASCII value: "<<sum<<endl;
				cout<<"------------------------------------------"<<endl;
			}
		}
};

int main()
{
	System o1;
	
	o1.solution();
	
	return 0;
}
