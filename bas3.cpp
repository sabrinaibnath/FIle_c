#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string line;

	ifstream file ("first.txt");

	while(getline(file,line)){

		cout<<line<<endl;
	}
	file.close();
	return 0;
}
	
