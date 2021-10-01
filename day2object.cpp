#include<iostream>//private//abstraction
using namespace std;//abstraction chahine matra dekhakhaune
class Employee
{
	private:
		int id;
		string name;
	public:
		void display(int i, string s)
		{
			id = i;
			name = s;
			cout<<"id "<<id<<endl;
			cout<<"name "<<name;
		}
};

int main()
{
	Employee emp;
	emp.display(1, "ram");
	
	return 0;
	
}
