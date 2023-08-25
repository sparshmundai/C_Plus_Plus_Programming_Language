#include<iostream>
using namespace std;
template<class T1>
void sum(T1 a,T1 b,T1 c)
{
cout<<"Template function1: Sum="<<a+b+c<<endl;
} 
template<class T1, class T2>
void sum(T1 a, T1 b, T2 c)
{
	cout<<"Template function2: Sum="<<a+b+c<<endl;
}
void sum(int a,int b)
{
	cout<<"Normal function: Sum ="<<a+b<<endl;
}
int main()
{
	int a,b;
	float x,y,z;
	cout<<"Enter two integer data: "<<endl;
	cin>>a>>b;
	cout<<"Enter three float data: "<<endl;
	cin>>x>>y>>z;
	sum(x,y,z);
	sum(a,b,z);
	sum(a,b);	
}