//1. Nayan bet ?.1200 to his friend Kartik if he find
//frequency of each characters in given String. Whereas
//Dhruv bet ?.1500 to his friend Piyush if he finds it
//first. Provide a C++ program to help this fellows so that
//they can play this interesting game.

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Nayan
{
	private:
		char a[100];
		int b[100];
		int i,j,c;
		
	public:
		
		Nayan()
		{
			cout<<endl<<"Enter Any Msg: ";
			fflush(stdin);
			cin>>a;
		}
		
		void frequency()
		{
			for(i=0;a[i]!=NULL;i++)
			{
				c=1;
				for(j=i+1;a[j]!=NULL;j++)
				{
					if(a[i]!='-1')
					{
						if(a[i]==a[j])
						{
							c++;
							a[j]='-1';
						}
					}
					b[i]=c;
				}
			}
			
			cout<<endl<<endl<<"------------------------------------------------------"<<endl;
			for(i=0;a[i]!=NULL;i++)
			{
				if(a[i]!='1')
				{
					cout<<" Frequency of "<<a[i]<<" is "<<b[i]<<endl;
				}
			}
			cout<<"------------------------------------------------------"<<endl;
		}
}; 

int main()
{
	Nayan n1;
	
	n1.frequency();
	
	return 0;
}

