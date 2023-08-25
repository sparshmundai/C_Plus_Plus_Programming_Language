#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("abcd.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
}