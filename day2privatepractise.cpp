#include<iostream>//abstraction
using namespace std;
class Student
{
	private:
		int rn;
		string name;
		int physics;
		int chemistry;
		int total;
	public:
		void display(int a, string b, int c, int d, int e)
		{
			rn=a;
			name =b;
			physics=c;
			chemistry=d;
			total=e;
			cout<<"Your rn"<<rn<<endl;
			cout<<"Your name"<<name<<endl;
			cout<<"Physics marks"<<physics<<endl;
			cout<<"Chemistry marks"<<chemistry<<endl;
			cout<<"Total"<<total<<endl;
		}
};
int main()
{
	int roll;
	string names;
	int phy;
	int chem;
	int totals;
	Student std;
	cout<<"Enter RN"<<endl;
	cin>>roll;
	cout<<"Enter name"<<endl;
	cin>>names;
	cout<<"Enter Physics marks"<<endl;
	cin>>phy;
	cout<<"Enter Chemistry marks"<<endl;
	cin>>chem;
	
	totals=phy+chem;
	std.display(roll, names, phy, chem, totals);
	return 0;
	
}
