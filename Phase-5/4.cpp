//4. Design a C++ UDF which producing cubes of all elements
//of provided array in form of another array. ¶hen, find
//average value of that new array. Based on that average
//value decide that array’s kindµ
// If 22<=average<=35, then an array is “¶IGH¶Ea©
// If 35<average<=50, then an array is “BALANCED©
// If average>50, then an array is “¶OXIC©
// If average<22, then an array is “LOOSEa”

#include<iostream>
using namespace std;

void setdata()
{
	int a[100],b[100],sum;
	int n,i,c,ave=0;
	
	cout<<endl<<" Enter How Many Elements: ";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
	
	
	cout<<endl<<" Cube of All Elements: ";
	cout<<"===================================="<<endl;
	for(i=0;i<n;i++)
	{
		sum=a[i]*a[i]*a[i];
		ave+=a[i]*a[i]*a[i];
		b[i]=sum;
	}
	c=ave/n;
	for(i=0;i<n;i++)
	{
		cout<<"b["<<i<<"]: ";
		cout<<b[i]<<endl;
	}
	
	cout<<endl<<"-------------------------------------------------------"<<endl;
	cout<<" Average of All Cube Numbers is: "<<c<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	
	cout<<endl<<" Array Kind is:"<<endl;
	cout<<"===================================="<<endl;
	if(c>22&&c<=35)
	{
		cout<<" Tighter"<<endl;
	}
	else if(c>35&&c<=50)
	{
		cout<<" Balanced"<<endl;
	}
	else if(c>50)
	{
		cout<<" Toxic"<<endl;
	}
	else if(c<22)
	{
		cout<<" Looser"<<endl;
	}
}

class Udf
{
	public:
		void Getdata()
		{
			setdata() ;
		}
		
};

int main()
{
	Udf u1;
	
	u1.Getdata();
	
	return 0;
}
