#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string name;
	int age,number,i;

	ofstream file;
	file.open("stu.txt",ios::out|ios::app);

	//cout<<"enter how many student:";
	//cin>>number;

	for(i=1;i<=3;i++){
		
		cout<<"enter the name of student:\n";
		getline(cin,name);
		file<<name<<"\t";

		cout<<"enter the age";
		cin>>age;
		file<<age<<endl;
		cin.ignore();


		}
	file.close();
	return 0;
}
