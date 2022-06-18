//15. A new OLED Smart TV as a gift from a bussiness with
//emersive 32*52 inch size is arrived at occation of
//Dashera in the house of Mayer. Now Mayer has to decide
//that how much of minimum wll area (width * hight) will
//be required to fit that new TV so that evevn after
//applying that TV, 10 inch of margin still available
//around TV. Help Mayer to indentify the solution by using
//c++.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Mayer
{
	private:
		int w=32, h=52;
		
	public:
		
		void solution()
		{
			cout<<endl<<"	Smart TV (width * hight) is 32*52 inch"<<endl;
			cout<<"	Minimum Wall Area is cover = "<<w*h<<endl;
			cout<<"	Wall Minimum H*W to Around Atlist 10 Inches Margin."<<endl;
			cout<<endl<<"	---------------------------------------------"<<endl;
			cout<<"	Wall H*W is = "<<w+20<<" * "<<h+20<<endl;
			cout<<"	---------------------------------------------"<<endl<<endl;
			cout<<"	Total Area That covered TV is = "<<(w+20)*(h+20)<<endl;
		}
};

int main()
{
	Mayer m1;
	
	m1.solution();
	
	return 0;
}
