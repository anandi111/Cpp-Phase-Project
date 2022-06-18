//6. A Reality show on TV organizes “Fastest-fingers Fast”
//round for entering in a Game. In this round participant
//has to find reverse of a given number as soon as possible
//to win this round. Design a C++ UDF for that.

#include<iostream>
using namespace std;

void reverse()
{
	int n,d,sum=0;
	
	cout<<endl<<" Enter Number: ";
	cin>>n;
	
	while(n!=0)
	{
		d=n%10;
		sum=(sum*10)+d;
		n=n/10;
	}
	
	cout<<endl<<"---------------------------------------"<<endl;
	cout<<" Reverse of given Number is : "<<sum<<endl;
	cout<<"---------------------------------------"<<endl;
}

class Fastest_fingers_Fast
{
	public:
		
		void win()
		{
			reverse();
		}
};

int main()
{
	Fastest_fingers_Fast f1;
	
	f1.win();
	
	return 0;
}

