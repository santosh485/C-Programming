#include<iostream>
using namespace std;
class Square
{
	public:
		int r;
		int area;
		void square()
		{
		    area=2*3.14*r;
			cout<<"Area of Square is"<<area<<endl;
		}
};
class Rectangle:public Square
{
	public:
		int l, b;
		int area1;
		void rectangle()
		{
		    area1=l*b;
			cout<<"Area of rectangel is "<<area1<<endl;
		}
};
int main()
{
	Rectangle rec;
	cout<<"Enter r value";
	cin>>rec.r;
	cout<<"Enter l and b value";
	cin>>rec.l>>rec.b;


	rec.square();
	rec.rectangle();
	return 0;
}
