#include<iostream>//parameterized constructor: function jastai call garnu pardaina
using namespace std;
class Employee
{
	private:
		int id;
		string name;
	public://always public
		Employee(int i, string s)//constructor//if nonparamterized called default
		{
			id = i;
			name = s;
			cout<<"id "<<id<<endl;
			cout<<"name "<<name<<endl;
		}
		void display()
		{
			cout<<"Hello World";
		}
};

int main()
{
	Employee emp(1, "ram"); //automatic call hunxa
	//emp.display(1, "ram");
	Employee emp1=Employee(2,"hari");//parameterized
	emp1.display();
	
	return 0;
	
}

