#include<iostream>//multilevelinheritance
using namespace std;
class Square
{
	public:
		int l=5;
		int area=l*l;
		void display()
		{
			cout<<"area of circle is "<<area<<endl;
		}
};
class Rectangle:public Square
{
	public:
		int b=4;
		int area1= l*b;
		void display2()
		{
			cout<<"area of rect "<<area1<<endl;
		}
};
class Volume:public Rectangle
{
	public:
		int h=6;
		int vol=l*b*h;
		void display3()
		{
			cout<<"Vol is "<<vol<<endl;
		}
};
int main()
{
	Volume vol;
	vol.display();
	vol.display2();
	vol.display3();
	return 0;
}
