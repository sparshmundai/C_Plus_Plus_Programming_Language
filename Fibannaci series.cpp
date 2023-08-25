#include<iostream>
using namespace std;
int main()
{
	int num1=0,num2=1,num3,number,i;
	cout<<"Enter the number of elements :";
	cin>>number;
	cout<<num1<<""<<num2<<"";
	for(i=2;i<number;++i)
	{
	num3=num1+num2;
	cout<<num3<<"";
	num1=num2;
	num2=num3;
	}
}