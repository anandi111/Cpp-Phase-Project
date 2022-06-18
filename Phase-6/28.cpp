//28. One character is common in both Marvel & DC universe 
//named “Access”. Implement below mentioned structure using 
//proper inheritance concept and with assumable fields and 
//methods. You can create and use any type of methods and 
//illustrations to enhance this program as per your 
//preference.

#include<iostream>
#include<string.h>
using namespace std;

class Universe
{
	public:
		
		void getdata1()
		{
			cout<<endl<<" Hello From Universe..."<<endl;
		}
};

class Marvel:public Universe
{
	public:
		
		void getdata2()
		{
			cout<<endl<<" Hy, Marvel..."<<endl;
		}
		
};

class DC:public Universe
{
	public:
		
		void getdata3()
		{
			cout<<endl<<" Hy, DC..."<<endl;
		}
};

class MHeroes:public Marvel
{
	public:
		
		void getdata4()
		{
			cout<<" I am MHeroes.."<<endl;
		}
};

class DCHeroes:public DC
{
	public:
		
		void getdata5()
		{
			cout<<" I am DCHeroes.."<<endl;
		}
};

class Access:public MHeroes, public DCHeroes
{
	public:
		
		void getdata6()
		{
			Marvel::getdata1();
			getdata2();
			getdata4();
			getdata3();
			getdata5();
		}
};

int main()
{
	Access a1;
	
	a1.getdata6();
	
	return 0;
}

