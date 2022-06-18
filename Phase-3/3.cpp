//3. An IT company named ìHAXM Pvt. Ltd.î released an open 
//competition to create a startup level User Authentication 
//system. 
//
//
//This system must have these functionalitiess
//p User can register with email and passwor?
//p User can login with proper email and passwor?
//p User can delete his/her accoun~

//Criterias for user authentications
//p A password must contain at least one digit, one 
//special symbol, one lowercase letter and one uppercase 
//letter while user try to registe}
//p Email and Password must be same while user logiê
//p After user account deletion, user cannot be able to 
//login again
//
//
//Design a C++ system for this competition for the price 
//money ?.2500 [Hintq You can use multiple String Arrays]

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class IT_company
{
	private:
		char email[100], pass[100], email1[100], pass1[100];
		int i, l=0, u=0, d=0, s=0, a=0;
		
	public:
		
		void menu()
		{
			cout<<endl<<"======================================="<<endl;
			cout<<" \t\tMENU"<<endl;
			cout<<"======================================="<<endl;
			cout<<" [1] Registrartion"<<endl;
			cout<<" [2] Login"<<endl;
			cout<<" [3] Deletion"<<endl;
			cout<<" [0] Exit"<<endl;
			cout<<"======================================="<<endl;
		}
		
		void registration()
		{
			cout<<endl<<"Enter Email: ";
			cin>>email;
			cout<<"Enter Password: ";
			cin>>pass;
			
			for(i=0;pass[i]!='\0';i++)
			{
				if(pass[i]>='a'&&pass[i]<='z')
				{
					l++;
				}
				else if(pass[i]>='A'&&pass[i]<='Z')
				{
					u++;
				}
				else if(pass[i]>='0'&&pass[i]<='9')
				{
					d++;
				}
				else
				{
					s++;
				}
			}
			
			if(l>=1 && u>=1 && d>=1 && s>=1)
			{
				cout<<endl<<"-----------------------------------------"<<endl;
				cout<<" Registration Successfully Done."<<endl;
				cout<<"-----------------------------------------"<<endl;
				a++;
			}
			else
			{
				cout<<endl<<"-----------------------------------------"<<endl;
				cout<<" Please, Enter Strong Password."<<endl;
				cout<<"-----------------------------------------"<<endl;
			}
		}
		
		void login()
		{
			if(a>=1)
			{
				cout<<endl<<"Enter Email: ";
				cin>>email1;
				cout<<"Enter Password: ";
				cin>>pass1;
				
				if(strcmp(email1, email)==0 && strcmp(pass1, pass)==0)
				{
					cout<<endl<<"-----------------------------------------"<<endl;
					cout<<" Login Successfully Done."<<endl;
					cout<<"-----------------------------------------"<<endl;	
				}
				else
				{
					cout<<endl<<"-----------------------------------------"<<endl;
					cout<<" Please, Enter right Password and Email."<<endl;
					cout<<"-----------------------------------------"<<endl;
				}	
			}
			else
			{
				cout<<endl<<"Please, First Complete Regstration...."<<endl;
			}
		}
		
		void deletion()
		{
			if(a>=1)
			{
				cout<<endl<<"Enter Email: ";
				cin>>email1;
				cout<<"Enter Password: ";
				cin>>pass1;
				
				if(strcmp(email1, email)==0 && strcmp(pass1, pass)==0)
				{
					for(i=0;email[i]!='\0';i++)
					{
						email[i]='0';
					}
					
					for(i=0;pass[i]!='\0';i++)
					{
						pass[i]='0';
					}
					
					cout<<endl<<"-----------------------------------------"<<endl;
					cout<<" Deletion Successfully Done."<<endl;
					cout<<"-----------------------------------------"<<endl;	
				}
				else
				{
					cout<<endl<<"-----------------------------------------"<<endl;
					cout<<" Please, Enter right Password and Email."<<endl;
					cout<<"-----------------------------------------"<<endl;
				}	
			}
			else
			{
				cout<<endl<<"Please, First Complete Registration...."<<endl;
			}
		}
		
};

int main()
{
	IT_company i1;
	int c;
	
	do{
		i1.menu();
		
		cout<<"Enter Your Choice: ";
		cin>>c;
		
		if(c==1)
		{
			i1.registration();
			getch();
			system("clr");
		}
		else if(c==2)
		{
			i1.login();
			getch();
			system("CLR");
		}
		else if(c==3)
		{
			i1.deletion();
			getch();
			system("CLR");	
		}
		else if(c!=0)
		{
			cout<<endl<<"Please Enter Valid Value...."<<endl;
			getch();
			system("CLR");
		}
		
	}while(c!=0);
	
	return 0;
}
