//13. Build a Counter App in C++ using OOP concept.
//Initially the counter meant to be set as a value 0 using
//constructor. By pressing UP Arrow from keyboard, counter
//will be increment and by pressing DOWN Arrow, counter
//will be decrement. You can use ASCII value concept by
//achieving this type of functionality at the execution
//time of a Program.

#include<iostream>
#include<string.h>
using namespace std;

class Logic
{
	private:
		int n;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Value: ";
			cin>>n;
		}
		
		void menu()
		{
			cout<<endl<<"	>>>>>>>>>>>MENU<<<<<<<<<<<"<<endl;
			cout<<"	=========================="<<endl;
			cout<<"	|| [1] Increment        ||"<<endl;
			cout<<"	|| [2] Decremnet        ||"<<endl;
			cout<<"	|| [0] Exit             ||"<<endl;
			cout<<"	=========================="<<endl<<endl;
		}
		
		void incre()
		{
			n+=1;
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Increment Value is: "<<n<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void decre()
		{
			n-=1;
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Decremnet Value is: "<<n<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};

int main()
{
	Logic l1;
	int c;
	
	l1.setdata();
	
	do{
		l1.menu();
		
		cout<<endl<<" Enter Choice: ";
		cin>>c;
		
		if(c==1)
		{
			l1.incre();
		}
		else if(c==2)
		{
			l1.decre();
		}
		else if(c!=0)
		{
			cout<<endl<<" Please Enter valid Value.........."<<endl;
		}
		
	}while(c!=0);
	
	return 0;
}
