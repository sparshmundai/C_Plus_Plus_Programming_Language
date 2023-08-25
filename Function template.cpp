#include<iostream>
using namespace std;
template <class T, class U>
void multiply(T a, U b)
{
	cout<<"Multiplication= "<<a*b<<endl;
}
int main()
{
	int a,b;
	float x,y;
	cout<<"Enter two integer number: "<<endl;
	cin>>a>>b;
	cout<<"Enter two float data: "<<endl;
	cin>>x>>y;
	multiply(a,b); //multiply two integer value
	multiply(x,y);//multiply two float value
	multiply(a,x); //multiply integer and float value
}
	