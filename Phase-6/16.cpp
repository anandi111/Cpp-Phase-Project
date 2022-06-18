//16. Find Volume of a Box using Parameterized Constructor
//and figure out if that is odd or even number.
//V = length x width x height

#include<iostream>
#include<string.h>
using namespace std;

class Box
{
	public:
		int v;
		
		Box(int l, int w, int h)
		{
			v=l*w*h;
			
			cout<<endl<<"---------------------------------------------"<<endl;
			cout<<" Volume of Box is: "<<v<<endl;
			cout<<"---------------------------------------------"<<endl;
			
			if(v%2==0)
			{
				cout<<endl<<"---------------------------------------------"<<endl;
				cout<<" Volume of Box is Even. "<<endl;
				cout<<"---------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"---------------------------------------------"<<endl;
				cout<<" Volume of Box is Odd. "<<endl;
				cout<<"---------------------------------------------"<<endl;
			}
		}
};

int main()
{

	int length, width, height;
	
	cout<<endl<<" Enter length: ";
	cin>>length;
	cout<<" Enter width: ";
	cin>>width;
	cout<<" Enter height: ";
	cin>>height;
	
	Box b1(length, width, height);
	
	return 0;
}
