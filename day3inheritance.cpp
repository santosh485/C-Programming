#include<iostream>//inheritance
using namespace std;
class Parent//parent class
{
	public:
		void display()
		{
			cout<<"Hello I am parent/base class"<<endl;
		}
};
class Child:public Parent
{
	public:
		void msg()
		{
			cout<<"child/base class";
		}
};
int main()
{
	Child chil;
	chil.display();
	chil.msg();
	cout<<"Hello World";
}
