//11. A Mountain Tracker needs a Temperature Converter for 
//maintaining his tracking at Mount Everest. Build 
//temperature converter for that tracker using C++ as your 
//primary language.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Tracker
{
	private:
		int n;
		float cel, fer;
		
	public:
		
		void menu()
		{
			cout<<endl<<"	=================================="<<endl;
			cout<<"	******TEMPERATURE CONVERTER*******"<<endl;
			cout<<"	=================================="<<endl;
			cout<<"	[1] Celcius to Ferunhit "<<endl;
			cout<<"	[2] Feranhit to celcius "<<endl;
			cout<<"	[0] Exit "<<endl;
			cout<<"	=================================="<<endl;
		}
		
		void celcius()
		{
			cout<<endl<<" Enter Temperature in celcius: ";
			cin>>n;
			
			fer=((9/5)*n)+32;
			
			cout<<endl<<"---------------------------------------------"<<endl;
			cout<<" FERUNHIT = "<<fer<<endl;
			cout<<"---------------------------------------------"<<endl;
		}
		
		void ferunhit()
		{
			cout<<endl<<" Enter Temperature in Ferunhit: ";
			cin>>n;
			
			cel=((n-32)*(5/9));
			
			cout<<endl<<"---------------------------------------------"<<endl;
			cout<<" CELCIUS = "<<cel<<endl;
			cout<<"---------------------------------------------"<<endl;
		}
};

int main()
{
	Tracker t1;
	int c1;
	
	do{
		
		t1.menu();
		
		cout<<endl<<"	Enter your Choice: ";
		cin>>c1;
		
		if(c1==1)
		{
			c1.celcius();
		}
		else if(c1==2)
		{
			c1.ferunhit();
		}
		else if(c1!=0)
		{
			cout<<endl<<"	Enter Valid Value..."<<endl;
		}
		
	}while(c1!=0);
		
	return 0;
}
