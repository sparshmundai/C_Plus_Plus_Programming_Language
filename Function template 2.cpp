#include<iostream>
using namespace std;
template <class T> T add(T &a, T &b)
{
	T result = a+b;
	return result;
}
int main()
{
	int i=2;
	int j=5;
	float m=3.2;
	float n=5.2; 
	cout<<"Addition of number is "<<add(i,j)<<endl;
	cout<<"Additon of number is"<<add(m,n)<<endl;
}