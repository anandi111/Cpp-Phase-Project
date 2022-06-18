//22. A Global survey held to collect information about 
//hotels all around the world. Provide a C++ solution to 
//create a class Hotel with fields like?
//w hotel_id
//w hotel_name
//w hotel_type
//w hotel_staff_size
//w hotel_room_size
//w hotel_establish_yeae
//w hotel_country
//w hotel_rating_type
//w hotel_website
//
//
//Illustrate the use of strict encapsulation with this 
//keyword.

#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	public:
		int hotel_id;
	    char hotel_name[100];
	    char hotel_type[100];
		int hotel_staff_size;
		int hotel_room_size;
		int hotel_establish_year;
		char hotel_country[100];
		int hotel_rating_type;
		char hotel_website[100];
			    
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Id: ";
			cin>>hotel_id;
			cout<<" Enter Name: ";
			fflush(stdin);
			gets(hotel_name);
			cout<<" Enter Type: ";
			fflush(stdin);
			gets(hotel_type);
			cout<<" Enter Staff Size: ";
			cin>>hotel_staff_size;
			cout<<" Enter Room Size: ";
			cin>>hotel_room_size;
			cout<<" Enter Establish Year: ";
			cin>>hotel_establish_year;
			cout<<" Enter Country: ";
			fflush(stdin);
			gets(hotel_country);
			cout<<" Enter Rating Type: ";
			cin>>hotel_rating_type;
			cout<<" Enter Website: ";
			fflush(stdin);
			gets(hotel_website);
		}
		
		void getdata()
		{
			cout<<endl<<" HOTEL INFORMATION: "<<endl;
			cout<<"============================================"<<endl;
			cout<<" Id: "<<hotel_id<<endl;
			cout<<" Name: "<<hotel_name<<endl;
			cout<<" Type: "<<hotel_type<<endl;
			cout<<" Staff Size: "<<hotel_staff_size<<endl;
			cout<<" Room Size: "<<hotel_room_size<<endl;
			cout<<" Establish Year: "<<hotel_establish_year<<endl;
			cout<<" Country: "<<hotel_country<<endl;
			cout<<" Rating Type: "<<hotel_rating_type<<endl;
			cout<<" Website: "<<hotel_website<<endl;
			cout<<"============================================="<<endl;
		}
};

int main()
{
	Hotel h[100];
	int n,i;
	
	cout<<endl<<" Enter How Many Hotel: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		h[i].setdata();
	}
	
	for(i=0;i<n;i++)
	{
		h[i].getdata();
	}
	
	return 0;
}
