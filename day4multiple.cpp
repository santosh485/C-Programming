#include<iostream>//multiple inheritance
using namespace std;
class Square
{
	public:
		int l=5;
		int area=l*l;
		void display()
		{
			cout<<"Area of square"<<area<<endl;
		}
};
class Rectangle
{
	public:
		int c=5;
		int b=4;
		int area=c*b;
		void display()//funtion ambiquity
		{
			cout<<"Area of rec"<<area<<endl;
		}
};
class Volume: public Square, public Rectangle
{
	public:
		int h=4;
		int vol= l*b*h;
		void display()
		{
			cout<<"Volume of is "<<vol<<endl;
		}
};
int main()
{
	Volume vol;
	vol.Square::display();//ambiguity resolution operation::scope resolution operator
	vol.Rectangle::display();
	vol.display();
	return 0;
}
