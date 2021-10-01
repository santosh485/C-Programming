#include<iostream>//Hierarchical Inheritance
using namespace std;
class Volume
{
	public:
	int l=5;
	int b=4;
	int h=3;
	int volume=l*b*h;
	void display1()
	{
		cout<<"Volume is "<<volume<<endl;
	} 
};
class Rectangle: public Volume
{
	public:
		int area=l*b;
		void display2()
		{
			cout<<"area is "<<area<<endl;
		}
};
class Square: public Volume
{
	public:
		int area=l*l;
		void display3()
		{
			cout<<"area is"<<area<<endl;
		}
		
};
int main()
{
	Volume vol;
	Rectangle rec;
	Square squ;
	vol.display1();
	rec.display2();
	squ.display3();
	return 0;
}
