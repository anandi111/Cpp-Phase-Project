//3. An action is helding at Arizona for selling an old haunted house. For
//the reason, this is a haunted house, only three gigantic companies took a part
//in this Auction. sell this haunted house to the highest bidder with
//count of three. use c++ with all required criteria to build this type of auction
//system.

#include<iostream>
#include<string.h>
using namespace std;

class Auction
{
	private:
		int a,b,c,d;
	
	public:
		
		void sell()
		{
			do{
				
				cout<<endl<<" Enter 1 Company Prize: ";
			cin>>a;
			cout<<endl<<" Enter 2 Company Prize: ";
			cin>>b;
			cout<<endl<<" Enter 3 Company Prize: ";
			cin>>c;
			
			if(a>b)
			{
				if(a>c)
				{
					cout<<endl<<" First Company Win Successfully......."<<endl;
				}
				else
				{
					cout<<endl<<" Third Company Win Successfully......."<<endl;
				}
			}
			else
			{
				if(b>c)
				{
					cout<<endl<<" Second Company Win Successfully......."<<endl;
				}
				else
				{
					cout<<endl<<" Third Company Win Successfully......."<<endl;
				}
			}
			
			cout<<endl<<" Press 1 for Continue.."<<endl;
			cout<<" Press 0 for Exit.."<<endl;
			
			cout<<endl<<" Enter Choice: ";
			cin>>d;
				
			}while(d!=0);	
		}
};

int main()
{
	Auction a1;
	
	a1.sell();
	
	return 0;
}

