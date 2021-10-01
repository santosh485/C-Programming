#include<iostream>//polymorphismoverriding class diff
using namespace std;//class diff but other sam apply inheritance
class Mammal//overriding in this to change parent
{
	public:
		void eat()
		{
			cout<<"mamal eat..";
		}
};
class Cow: public Mammal
{
	public:
		void eat()
		{
			cout<<"cow eat.";
		}
};
int main()
{
	Cow c;
	c.Mammal::eat();//ambiquity resolution
	c.eat();
	return 0;
}

