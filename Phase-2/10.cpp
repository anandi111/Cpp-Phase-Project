//10. An average consumer established his own business 
//shop. He went to C.A for maintain all his accounts 
//related queries. Now, help that C.A to build GST 
//calculator for ease of calculation.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class business
{
	private:
		int o_p, n_p;
		double gst;
		
	public:
		
		business()
		{
			cout<<endl<<"	Enter Net Price of Product: ";
			cin>>n_p;
			cout<<"	Enter Original Prise of Product: ";
			cin>>o_p;
		}
		
		void GST()
		{
			gst = ((n_p-o_p)*100)/o_p;
			
			cout<<endl<<"	---------------------------------------------"<<endl;
				cout<<"	 GST of this product is = "<<gst<<endl;
				cout<<"	---------------------------------------------"<<endl;
		} 
};

int main()
{
	business b1;
	
	b1.GST();
	
	return 0;
}
