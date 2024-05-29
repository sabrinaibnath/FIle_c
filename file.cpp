#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ofstream file;
	file.open("first.txt");

	file<<"sabrina ibnath";

	file.close();

	ifstream file2("first.txt");
	string word;
	while(getline(file2,word)){
		cout<<word<<" ";
	}
	file2.close();
	return 0;
}
