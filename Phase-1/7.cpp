//7. Priyank needs to find an average of three numbers to
//gain required passing marks in exam. Write a C++ Program
//to helps Priyank to solve his issue.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class marks
{
	private:
		int m_m,s_m,e_m;
		float ave;
		
	public:
		
		void average()
		{
			cout<<endl<<"	Enter Mark of Maths: ";
			cin>>this->m_m;
			cout<<"	Enter Mark of Science: ";
			cin>>this->s_m;
			cout<<"	Enter Mark of English: ";
			cin>>this->e_m;
			
			ave=(m_m+s_m+e_m) / 3;
			
			cout<<endl<<"	AVERAGE:"<<endl;
			cout<<"	----------------------------------------"<<endl;
			cout<<"	Maths = "<<this->m_m<<endl;
			cout<<"	Science = "<<this->s_m<<endl;
			cout<<"	English = "<<this->e_m<<endl;
			cout<<"	Average = "<<this->ave<<endl;
			cout<<"	----------------------------------------"<<endl<<endl;
		}
			
};

int main()
{
	marks e1;
	
	e1.average();
	
	return 0;
}
