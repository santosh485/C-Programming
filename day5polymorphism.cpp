#include<iostream>//polymorphism autai nam function derai kam
using namespace std;//overloading function type autari but return type/parameterized diff autai class vitra hunuparxa
void test(int i)
{
	cout<<"Th int is "<<i<<endl;
}
void test(double f)
{
	cout<<"The float is"<<f<<endl;
	
}
void test(char const*ch)
{
	cout<<"The char is"<<ch<<endl;
}
int main()
{
	test(5);
	test(5.5);
	test("ram");
	return 0;
}
