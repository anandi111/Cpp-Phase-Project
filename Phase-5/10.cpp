//10. A bomb is planted at Suratgarh Railway Station. It
//can be defused by entering any number which is itself an
//Armstrong number. Design a C++ UDF which figures out if a
//given number is Armstrong or not.

#include<iostream>
using namespace std;

void Armstrong_number()
{
	int n,d,i,count=0,j,sum,m;
	int a[100];
	
	cout<<endl<<" 	Enter Number: ";
	cin>>n;
	m=n;
	
			while(n!=0)
			{
				d=n%10;
				a[i]=d;
				i++;
				n=n/10;
				count++;
			}
			for(j=0;j<count;j++)
			{
//				cout<<a[j]<<endl;
				sum = sum + ( a[j]*a[j]*a[j] );
			}

			if(m==sum)
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   Yes, Number is Armstrong."<<endl;
				cout<<"	---------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	   No, Number is not Armstrong."<<endl;
				cout<<"	---------------------------------------"<<endl;	
			}
}

class Number
{
	public:
		
		void n()
		{
			Armstrong_number();
		}	
};

int main()
{
	Number a1;
	
	a1.n();
	
	
	return 0;
}
