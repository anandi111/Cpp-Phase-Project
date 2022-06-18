//10. Develop a C++ solution by which a user can add/
//subtract/multiply/divide two Complex numbers with help of
//Operator Overloading concept. In context of math, a
//complex number contains two parts: a real part and an
//imagenary part.

#include<iostream>
#include<string.h>
using namespace std;

class Complex
{
	private:
		int x,y;
		
	public:
		
		void setdata(int n1, int n2)
		{
			x=n1;
			y=n2;
		}
		
		void getdata()
		{
			cout<<endl<<" ( "<<x<<" + "<<y<<"j )"<<endl;
		}
		
		Complex operator+(Complex n)
		{
			Complex t;
			t.x=x+n.x;
			t.y=y+n.y;
			return t;
		}
		
		Complex operator-(Complex n)
		{
			Complex t;
			t.x=x-n.x;
			t.y=y-n.y;
			return t;
		}
		
		Complex operator*(Complex n)
		{
			Complex t;
			t.x=x*n.x;
			t.y=y*n.y;
			return t;
		}
		
		Complex operator/(Complex n)
		{
			Complex t;
			t.x=x/n.x;
			t.y=y/n.y;
			return t;
		}
		
		Complex operator%(Complex n)
		{
			Complex t;
			t.x=x%n.x;
			t.y=y%n.y;
			return t;
		}
		
		void menu()
		{
			cout<<endl<<"	>>>>>>>>>>>MENU<<<<<<<<<<<"<<endl;
			cout<<"	=========================="<<endl;
			cout<<"	|| [1] Addition		||"<<endl;
			cout<<"	|| [2] Substraction	||"<<endl;
			cout<<"	|| [3] Multiplication   ||"<<endl;
			cout<<"	|| [4] Divition		||"<<endl;
			cout<<"	|| [5] Modulas		||"<<endl;
			cout<<"	|| [0] Exit		||"<<endl;
			cout<<"	=========================="<<endl<<endl;
		}
};

int main()
{
	int r1, r2, i1, i2, choice;
	Complex c1,c2,c3;
	
	do{
		c1.menu();
		
		cout<<endl<<" Enter Choice: ";
		cin>>choice;
		
		if(choice==1)
		{
			cout<<endl<<" Enter First Real Number: ";
			cin>>r1;
			cout<<" Enter First Imaginary Number: ";
			cin>>i1;
			cout<<" Enter Second Real Number: ";
			cin>>r2;
			cout<<" Enter Second Imaginary Number: ";
			cin>>i2;
			
			c1.setdata(r1,i1);
			c2.setdata(r2,i2);
			
			c1.getdata();
			c2.getdata();
			
			c3=c1+c2;
			
			cout<<endl<<" Addition of Above Complex Number is: "<<endl;
			c3.getdata();
		}
		else if(choice==2)
		{
			cout<<endl<<" Enter First Real Number: ";
			cin>>r1;
			cout<<" Enter First Imaginary Number: ";
			cin>>i1;
			cout<<" Enter Second Real Number: ";
			cin>>r2;
			cout<<" Enter Second Imaginary Number: ";
			cin>>i2;
			
			c1.setdata(r1,i1);
			c2.setdata(r2,i2);
			
			c1.getdata();
			c2.getdata();
			
			c3=c1-c2;
			
			cout<<endl<<" Substraction of Above Complex Number is: "<<endl;
			c3.getdata();
		}
		else if(choice==3)
		{
			cout<<endl<<" Enter First Real Number: ";
			cin>>r1;
			cout<<" Enter First Imaginary Number: ";
			cin>>i1;
			cout<<" Enter Second Real Number: ";
			cin>>r2;
			cout<<" Enter Second Imaginary Number: ";
			cin>>i2;
			
			c1.setdata(r1,i1);
			c2.setdata(r2,i2);
			
			c1.getdata();
			c2.getdata();
			
			c3=c1*c2;
			
			cout<<endl<<" Multiplication of Above Complex Number is: "<<endl;
			c3.getdata();
		}
		else if(choice==4)
		{
			cout<<endl<<" Enter First Real Number: ";
			cin>>r1;
			cout<<" Enter First Imaginary Number: ";
			cin>>i1;
			cout<<" Enter Second Real Number: ";
			cin>>r2;
			cout<<" Enter Second Imaginary Number: ";
			cin>>i2;
			
			c1.setdata(r1,i1);
			c2.setdata(r2,i2);
			
			c1.getdata();
			c2.getdata();
			
			c3=c1/c2;
			
			cout<<endl<<" Divition of Above Complex Number is: "<<endl;
			c3.getdata();
		}
		else if(choice==5)
		{
			cout<<endl<<" Enter First Real Number: ";
			cin>>r1;
			cout<<" Enter First Imaginary Number: ";
			cin>>i1;
			cout<<" Enter Second Real Number: ";
			cin>>r2;
			cout<<" Enter Second Imaginary Number: ";
			cin>>i2;
			
			c1.setdata(r1,i1);
			c2.setdata(r2,i2);
			
			c1.getdata();
			c2.getdata();
			
			c3=c1%c2;
			
			cout<<endl<<" Modulas of Above Complex Number is: "<<endl;
			c3.getdata();
		}
		else if(choice!=0)
		{
			cout<<endl<<" Please, Enter valid Value......"<<endl;
		}
		
	}while(choice!=0);
			
	return 0;
}

