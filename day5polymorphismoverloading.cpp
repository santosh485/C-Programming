#include<iostream>
using namespace std;
class Area//autai class
{
	public:
		void area(int l)
		{
			int area=l*l;
			cout<<"Square area"<<area<<endl;
		}
		void area(double l, double b)
		{
			double area=l*b;
			cout<<"Rectangle area"<<area<<endl;
		}
		void area(double r)
		{
			double area=2*3.14*r;
			cout<<"Circle area"<<area<<endl;
		}
};
int main()
{
	Area ar;
	ar.area(5);
	ar.area(5.5, 5.5);
	ar.area(5.5);
	return 0;
}
