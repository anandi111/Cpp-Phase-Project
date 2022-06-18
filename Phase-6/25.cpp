//25. Create a C++ Base class Shape with a constructor for 
//providing values for width and height. Then define two 
//derived classes Triangle and Rectangle, that calculate 
//the area of the shape area(). In the main, define two 
//objects: a triangle and a rectangle and then call the 
//area() function by this two objects.

#include<iostream>
#include<string.h>
using namespace std;

class Shape
{
	public:
		int w,l,h,b;
		
		void shape1()
		{
			cout<<endl<<" Enter Width: ";
			cin>>w;
			cout<<" Enter Length: ";
			cin>>l;
		}
		
		void shape2()
		{
			cout<<endl<<" Enter Height: ";
			cin>>h;
			cout<<" Enter Base: ";
			cin>>b;
		}
};

class Triangle: public Shape
{
	public:
		
		void area1()
		{
			shape2();
			cout<<endl<<"--------------------------------------------------"<<endl;
			cout<<" Area of Triangle is: "<<(0.5*h)*b<<endl;
			cout<<"--------------------------------------------------"<<endl;
		}
};

class Rectangle: public Shape
{
	public:
		
		void area2()
		{
			shape1();
			cout<<endl<<"--------------------------------------------------"<<endl;
			cout<<" Area of Rectangle is: "<<l*w<<endl;
			cout<<"--------------------------------------------------"<<endl;
		}
};

int main()
{
	Triangle t1;
	Rectangle r1;
	
	t1.area1();
	r1.area2();
	
	return 0;
}

