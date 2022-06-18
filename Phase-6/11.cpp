//11. Build an Indian Regional Festival system in C++. User
//can enter any date of current running year, and bases on
//that date display which festival will be coming on that
//date.

#include<iostream>
#include<string.h>
using namespace std;

class Festival
{
	private:
		int month, date;
		
	public:
	
		void setdata()
		{
			cout<<endl<<"Enter Month: ";
			cin>>month;
			cout<<endl<<"Enter Date: ";
			cin>>date;
		}
		
		void getdata()
		{
			cout<<endl<<date<<"/"<<month<<"/"<<"2021"<<endl<<endl; 
			if(date==4 && month==9) 
			{ 
				cout<<"Diwali"; 
			} 
			else if(date==28 && month==3) 
			{ 
				cout<<"Holi"; 
			} 
			else if(date==7 && month==10) 
			{ 
				cout<<"Navratri"; 
			}
			else if(date==11 && month==10) 
			{ 
				cout<<"Durga Puja"; 
			} 
			else if(date==15 && month==10) 
			{ 
				cout<<"Dashra"; 
			} 
			else if(date==30 && month==8) 
			{ 
				cout<<"Janmashtami"; 
			} 
			else if(date==10 && month==9) 
			{ 
				cout<<"Ganesh Chaturthi"; 
			} 
			else if(date==14 && month==5) 
			{ 
				cout<<"Eid-ul-Fitr"; 
			} 
			else if(date==25 && month==12) 
			{ 
				cout<<"Christmas"; 
			} 
			else if(date==11 && month==3) 
			{ 
				cout<<"Maha Shivratri"; 
			} 
			else if(date==22 && month==8) 
			{ 
				cout<<" Rakshabandhan"; 
			} 
			else if(date==12 && month==8) 
			{ 
				cout<<"Onam"; 
			} 
			else if(date==13 && month==4) 
			{ 
				cout<<"Baisakhi"; 
			}
			else if(date==19 && month==9) 
			{ 
				cout<<"Gurpurab"; 
			} 
			else if(date==14 && month==1) 
			{ 
				cout<<"Makar Sankranti"; 
			} 
			else if(date==4 && month==4) 
			{ 
				cout<<"Easter"; 
			} 
			else if(date==20 && month==6) 
			{ 
				cout<<"Hemis"; 
			} 
			else if(date==10 && month==11) 
			{ 
				cout<<"Chhath Puja"; 
			} 
			else if(date==29 && month==3) 
			{ 
				cout<<"Gangaur"; 
			} 
			else if(date==1 && month==12) 
			{ 
				cout<<"Hornbill Festival";
			} 
			else if(date==26 && month==5) 
			{ 
				cout<<"Saga Dawa"; 
			} 
			else if(date==4 && month==7) 
			{ 
				cout<<"Dree Festival"; 
			} 
			else if(date==15 && month==2) 
			{ 
				cout<<"Lui-Ngai-Ni"; 
			}
			else if(date==1 && month==5) 
			{ 
				cout<<"Moatsu Mong"; 
			} 
			else 
			{ 
				cout<<"no festival..."; 
			} 

		}	
};

int main()
{
	Festival f1;
	
	f1.setdata();
	f1.getdata();
	
	return 0;
}
