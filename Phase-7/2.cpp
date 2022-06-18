//2. Design a Menu Driven Simple Calculator with a help of 
//Class Templates. User should have a choice of following 
//operationsQ
//\ AdditioP
//\ SubtractioP
//\ MultiplicatioP
//\ DivisioP
//\ ModuluW
//\ Exits

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Calculator
{
	public:
		int c;
		int n1, n2;
		
		void menu()
		{
			cout<<endl<<"	>>>>>>>>>>>MENU<<<<<<<<<<<"<<endl;
			cout<<"	=========================="<<endl;
			cout<<"	|| [1] Addition		||"<<endl;
			cout<<"	|| [2] Substraction	||"<<endl;
			cout<<"	|| [3] Multiplication   ||"<<endl;
			cout<<"	|| [4] Divition		||"<<endl;
			cout<<"	|| [5] Modulas		||"<<endl;
			cout<<"	|| [0] Exit		||"<<endl;
			cout<<"	=========================="<<endl<<endl;
		}

		void Addition()
		{
			
					cout<<"	Enter Value of A: ";
					cin>>n1;
					cout<<"	Enter Value of B: ";
					cin>>n2;
					
					cout<<"	---------------------------------------------------"<<endl;
					cout<<"	Addition of above number is "<<n1+n2<<endl;
					cout<<"	---------------------------------------------------"<<endl;
		}
		
		void Substraction()
		{
			
					cout<<"	Enter Value of A: ";
					cin>>n1;
					cout<<"	Enter Value of B: ";
					cin>>n2;
					
					cout<<"	---------------------------------------------------"<<endl;
					cout<<"	Substraction of above number is "<<n1-n2<<endl;
					cout<<"	---------------------------------------------------"<<endl;
		}
		
		void Multiplication()
		{
			
					cout<<"	Enter Value of A: ";
					cin>>n1;
					cout<<"	Enter Value of B: ";
					cin>>n2;
					
					cout<<"	---------------------------------------------------"<<endl;
					cout<<"	Multiplication of above number is "<<n1*n2<<endl;
					cout<<"	---------------------------------------------------"<<endl;
		}
		
		void Divition()
		{
			
					cout<<"	Enter Value of A: ";
					cin>>n1;
					cout<<"	Enter Value of B: ";
					cin>>n2;
					
					cout<<"	---------------------------------------------------"<<endl;
					cout<<"	Divition of above number is "<<n1/n2<<endl;
					cout<<"	---------------------------------------------------"<<endl;
		}
		
		void Modulas()
		{
			
					cout<<"	Enter Value of A: ";
					cin>>n1;
					cout<<"	Enter Value of B: ";
					cin>>n2;
					
					cout<<"	---------------------------------------------------"<<endl;
					cout<<"	Modulas of above number is "<<n1%n2<<endl;
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
					Addition();	
				}
				else if(c==2)
				{
					Substraction();	
				}
				else if(c==3)
				{
					Multiplication();	
				}
				else if(c==4)
				{
					Divition();	
				}
				else if(c==5)
				{
					Modulas();	
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
	Calculator c1;
	
	c1.operation();
	
	return 0;
}
