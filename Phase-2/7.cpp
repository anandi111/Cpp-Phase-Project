//7. Prepare a Calculator which only performs Circle 
//related mathematical operations like finding Area of 
//Circle, Perimeter of Circle and Conversion of radius into 
//Diameter. All operations are continuous until user wish 
//to exit. By using C++, create this calculator for a batch 
//of bacholers.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Calculator
{
	private:
		int c, r;
		float ans;
		
	public:
		
		void menu()
		{
			cout<<endl<<"	>>>>>>>>>>>    MENU    <<<<<<<<<<<"<<endl;
			cout<<"	=================================="<<endl;
			cout<<"	|| [1] Area of Circle		||"<<endl;
			cout<<"	|| [2] Perimeter of Circle	||"<<endl;
			cout<<"	|| [3] radius into Diameter     ||"<<endl;
			cout<<"	|| [0] Exit			||"<<endl;
			cout<<"	=================================="<<endl<<endl;
		}
		
		void Area_of_Circle()
		{
			cout<<"	Enter Value of Radius: ";
			cin>>r;
			
			ans = 3.14*(r*r);
			
			cout<<"	---------------------------------------------------"<<endl;
			cout<<"	Area of Circle is "<<ans<<endl;
			cout<<"	---------------------------------------------------"<<endl;
		}
		
		void Perimeter_of_Circle()
		{
			cout<<"	Enter Value of Radious: ";
			cin>>r;
			
			ans=2*(3.14*r);
			
			cout<<"	---------------------------------------------------"<<endl;
			cout<<"	Perimeter of Circle is "<<ans<<endl;
			cout<<"	---------------------------------------------------"<<endl;
		}
		
		void radius_into_Diameter()
		{
			cout<<"	Enter Value of Radious: ";
			cin>>r;
			
			ans=2*r;
			
			cout<<"	---------------------------------------------------"<<endl;
			cout<<"	Radius into Diameter is "<<ans<<endl;
			cout<<"	---------------------------------------------------"<<endl;
		}
		
		void operation()
		{
			do{
				menu();
				
				cout<<"	Enter Your Choice: ";
				cin>>c;
				cout<<endl;
				
				if(c==1)
				{
					Area_of_Circle();	
				}
				else if(c==2)
				{
					Perimeter_of_Circle();	
				}
				else if(c==3)
				{
					radius_into_Diameter();	
				}
				else if(c!=0)
				{
					cout<<"	Enter Valid value..."<<endl;
				}
				
			}while(c!=0);
		}
}; 

int main()
{
	Calculator c1;
	
	c1.operation();
	
	return 0;
}
