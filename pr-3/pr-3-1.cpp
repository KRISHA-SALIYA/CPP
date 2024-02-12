#include<iostream>
using namespace std;

class  shape
{
	protected :
	      int width;
	      int height;
	public
		shape()
		{
			cout<<"Enter width ";
			cin>>"width";
			cout<<"Enter height ";
			cin>>"height";
		}
};
class Triangle: public shape
{
	public:
		void Area()
		{
			cout<<"Triangle :"<<0.5*width*height<<endl;
		}
};
class Rectangle: public shape
{
	public:
		void Area()
		{
			cout<<" Rectangle:"<<width*height<<endl;
		}
};

int main()
{
	Triangle t1;
	t1.Area();
	
	Rectangl r1;
	r1.Area();
}
