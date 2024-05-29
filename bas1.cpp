#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
	ofstream f;
	string name;

	f.open("stu.txt");
	cout<<"enter your name";
	cin>>name;
	f<<name;
	f.close();
}


