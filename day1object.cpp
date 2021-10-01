#include<iostream>//incapsulation
using namespace std;
class Student // name capital class generalised term
{
	public://access specifier/private/protected
	int id;//data member 
	float salary;
	string name;
	void display()//member funtion
	{
		cout<<"id = "<<id<<endl;
		cout<<"Name ="<<name;
	}	
};

int main()
{
	Student std;//object creation(emp)
	std.id=101;
	std.name="john";
	std.display();
	return 0;
	
}

