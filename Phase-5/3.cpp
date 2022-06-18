//3. Kevin has two plain floors within different bowls 
//containig one coin in each bowl. He bet his friend to 
//transfer that coins in either bowls within 5 minutes. 
//Help him by providing a C++ solution using UDF. 

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void Bowl()
{
	int a[10], b[10];
		int i;

			cout<<endl<<" Enter 10 Value: "<<endl;
			cout<<"================================================="<<endl;
			for(i=0;i<10;i++)
			{
				cout<<" a["<<i<<"] : ";
				cin>>a[i];
			}
		

			cout<<endl<<" Transfering in Another one : "<<endl;
			cout<<"================================================="<<endl;
			for(i=0;i<10;i++)
			{
				b[i]=a[i];
				cout<<" b["<<i<<"] : "<<b[i]<<endl;
			}
}

class Kevin
{
		public:
			
		void solution()
		{
			Bowl();
		}

};

int main()
{
	Kevin k1;
	
	k1.solution();
	
	return 0;
}
