//11. Declare a result of the survey that tells us which 
//country have largest Army strength, US, China or India. 
//Design a C++ UDF to announce the result of this survey to 
//the public.

#include<iostream>
using namespace std;

void result()
{
	int india, US, china;
	
	india=1237117;
	US=480893;
	china=915000;
	
	if(india>US)
	{
		if(india>china)
		{
			cout<<endl<<" India have largest Army strength."<<endl;
		}
		else
		{
			cout<<endl<<" China have largest Army strength."<<endl;
		}
	}
	else
	{
		if(US>china)
		{
			cout<<endl<<" US have largest Army strength."<<endl;
		}
		else
		{
			cout<<endl<<" China have largest Army strength."<<endl;
		}
	}
}

class country
{
	public:
		
		void getdata()
		{
			result();
		}
};

int main()
{
	country c1;
	
	c1.getdata();
	
	return 0;
}
