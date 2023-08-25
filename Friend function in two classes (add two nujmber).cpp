#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public :
	A()
	{
		cout<<"Enter the first number"<<endl;
		cin>>a;
	}
	friend int sum(A, B);
};
class B
{
	int b;
	public :
	B()
	{
		cout<<"Enter the second number"<<endl;
		cin>>b;
	}
	friend int sum(A v1,B v2)
	{
		return(v1.a + v2.b);
	}
};
int main()
	{
		A a;
		B b;
		cout<<"Sum of two number is = "<<sum(a,b);
	}
