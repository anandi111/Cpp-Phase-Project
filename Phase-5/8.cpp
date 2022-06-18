//8. Design a C++ UDF which converts given seconds into
//time in format of HH:MM:SS. Also create another UDF which
//converts given time into total seconds. End user have
//choice to perform either operations whenever he/she
//wants.

#include<iostream>
using namespace std;

void Menu()
{
	cout<<endl<<"	>>>>>>>>>>>>>>>MENU<<<<<<<<<<<<<<<"<<endl;
			cout<<"	=================================="<<endl;
			cout<<"	|| [1] Seconds into Time 	||"<<endl;
			cout<<"	|| [2] Time into Seconds	||"<<endl;
			cout<<"	|| [0] Exit		        ||"<<endl;
			cout<<"	=================================="<<endl<<endl;
}

void Seconds_into_Time()
{
	int n,a,h,m,s;
	
	cout<<endl<<" Enter Total Seconds: ";
	cin>>n;
	
	h=n/3600;
	a=n%3600;
	m=a/60;
	s=a%60;
	
	cout<<endl<<"------------------------------------------------------"<<endl;
	cout<<" Total Time is: "<<h<<":"<<m<<":"<<s<<endl;
	cout<<"------------------------------------------------------"<<endl;
}

void Time_into_Seconds()
{
	int n,a,h,m,s,t;
	
	cout<<endl<<" Enter Hours: ";
	cin>>h;
	cout<<" Enter Minutes: ";
	cin>>m;
	cout<<" Enter Seconds: ";
	cin>>s;
	
	t=(h*3600)+(m*60)+s;
	
	cout<<endl<<"------------------------------------------------------"<<endl;
	cout<<" Total Second is: "<<t<<endl;
	cout<<"------------------------------------------------------"<<endl;
}

class operation
{
	public:
		int c;
		
		void time()
		{
			do{
				Menu();
				
				cout<<"	Enter Your Choice: ";
				cin>>c;
				cout<<endl;
				
				if(c==1)
				{
					Seconds_into_Time();	
				}
				else if(c==2)
				{
					Time_into_Seconds();	
				}
				else if(c!=0)
				{
					cout<<"	Enter Valid Value..."<<endl;
				}
				
			}while(c!=0);
		}
};

int main()
{
	operation o1;
	
	o1.time();
	
	return 0;
}
