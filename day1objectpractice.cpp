#include<iostream>
using namespace std;
class Student
{
	public:
		int rn;
		string name;
		int physics;
		int chemistry;
		int total;
		int display()
		{
			total=chemistry+physics;
			cout<<"rn "<<rn<<endl;
			cout<<"name "<<name<<endl;
			cout<<"physics"<<physics<<endl;
			cout<<"chemistry"<<chemistry<<endl;
			cout<<"total"<<total<<endl;
			if (total>30)
			{
				cout<<"pass"<<endl;
				return total>30;
			}
			else
				cout<<"Fail"<<endl;
				return total<30;
		}
};
int main()
{
	Student std;
	cout<<"Enter the rn"<<endl;
	cin>>std.rn;
	cout<<"Enter name="<<endl;
	cin>>std.name;
	cout<<"Enter Physics marks"<<endl;
	cin>>std.physics;
	cout<<"Enter Chemistry marks"<<endl;
	cin>>std.chemistry;
	
	
	std.display();
	return 0;
	
}
