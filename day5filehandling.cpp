#include<iostream>
#include<fstream>//open, write or read , close
//ofstream to write(output)
//ifstream read only(input)
//fstream read or write both(input/output)
//app append add o(write)
//ate at the end o/I
//in read I
//out write o
//trunc already existed and then delete and write new
using namespace std;
int main()
{
	fstream tex;//class obj
	tex.open("text.txt", ios::out);
	if (!tex)
	{
		cout<<"file not created";
	}
	else 
	{
		cout<<"File created successulfly";
		tex<<"Hello world";
		tex.close();
	}
	return 0;
}

