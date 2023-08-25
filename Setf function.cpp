#include<iostream>
using namespace std;
int main()
{
	cout.setf(ios::left,ios::adjustfield);
	cout.width(10);
	cout<<"freeky";
	cout<<endl;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(10);
	cout<<"World";
	cout<<endl;
}