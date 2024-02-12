#include<iostream>
using namespace std;

class number 
{
	public:
		int n;
		void number()
		{
			cout<<"Enter N :";
			cin>> n;
		}
};
class square : public Number
{
	public:
		void square()
		{
			cout<<"square :"<<n*n<<endle;
		}
};
class cube:public Number
{
	public:
		void cube()
		{
			cout<<"cube : "<<n*n*n<<endl;
		}
};
int main()
{
	square s1;
	s1.number;
	s1.square();
	cube c1;
	c1.number;
	c1.cube();
}
