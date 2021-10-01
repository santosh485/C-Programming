#include<iostream>// dis constructor distroy memory
using namespace std;
class Employee
{
	private:
		int id;
		string name;
	public:
		Employee()//default constructor
		{
			cout<<"constructor block"<<endl;
		}
		void display()
		{
			cout<<"Funtion block"<<endl;
		}
		~Employee()//destructor
		{
			cout<<"Hello i am destructor"<<endl;//last ma execute
		}
		
};

int main()
{
	Employee emp;
	Employee emp1;
	emp.display();
	return 0;
	
}

