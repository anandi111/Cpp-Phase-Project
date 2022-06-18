//5. A Prime School wants an automate system for generating 
//students grades. 
//
//If marks in Maths>80, Phy>75 and Chem>72 then generate 
//Grade A.
//
//If marks in 60<=Maths<=80, 55<=Phy<=75 and 50<=Chem<=72 
//then generate Grade B.
//
//If marks in 40<=Maths<60, 35<=Phy<55 and 35<=Chem<50 then 
//generate Grade C.
//
//Apply Grade D (Fail) if minimum criteria of marks doesn’t 
//satisfy bt any student.
//
//Write a C++ Program for generating total N number of 
//students grades for this Prime School.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Marks
{
	private:
		int Maths, Phy, Chem;
		
	public:
		
		Marks()
		{
			cout<<endl<<"	Enter Your Maths Marks: ";
			cin>>Maths;
			cout<<"	Enter Your Physics Marks: ";
			cin>>Phy;
			cout<<"	Enter Your Camistry Marks: ";
			cin>>Chem;
		}
		
		void grade()
		{
			if(Maths>80&&Phy>75&&Chem>72)
			{
				cout<<"	---------------------------------------------------"<<endl;
				cout<<"	Congratulation! Your Grade is A."<<endl;
				cout<<"	---------------------------------------------------"<<endl;
			}	
			else if(60<=Maths&&Maths<=80 || 55<=Phy&&Phy<=75 || 50<=Chem&&Chem<=72)
			{
				cout<<"	---------------------------------------------------"<<endl;
				cout<<"	Congratulation! Your Grade is B."<<endl;
				cout<<"	---------------------------------------------------"<<endl;
			}		
			else if(40<=Maths&&Maths<60 || 35<=Phy&&Phy<55 || 35<=Chem&&Chem<50)
			{
				cout<<"	---------------------------------------------------"<<endl;
				cout<<"	Your Grade is C."<<endl;
				cout<<"	---------------------------------------------------"<<endl;
			}
			else
			{
				cout<<"	---------------------------------------------------"<<endl;
				cout<<"	Your Grade is D."<<endl;
				cout<<"	---------------------------------------------------"<<endl;
			}
		}
};

int main()
{
	Marks m1;
	
	m1.grade();
	
	return 0;
}
