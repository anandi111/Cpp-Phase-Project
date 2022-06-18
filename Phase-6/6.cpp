//6. A 26 m long rope is stretched from the top of a 13 m 
//tree to the ground. Find the distance between the tree 
//and the end of the rope on the ground.

#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	private:
		int f=13, s=13, c, d, temp=0;
		
	public:
		
		void getdata()
		{
			d=(f*f)+(s*s);
			
			c = d/ 2;
			while(c!=temp)
			{
			temp = c;
			c = (d/temp + temp)/2;
			}

			
			cout<<endl<<"-----------------------------------------------------------------------------"<<endl;
			cout<<" The distance between the tree and the end of the rope on the ground is: "<<c<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
		}
};

int main()
{
	Distance d1;
	
	d1.getdata();
		
	return 0;
}
