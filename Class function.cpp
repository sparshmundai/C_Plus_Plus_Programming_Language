#include<iostream>
using namespace std;
template <class T>
class Addition 
{
	public:
	T Add(T,T);
};
template <class T>
T Addition <T> :: Add(T n1, T n2)
{
  T rs;
  rs = n1+n2;
   return rs;
 }  
int main()
{
	Addition <int> obj1;
	Addition <long> obj2;
	int A=10, B=20, C;
	long I=11, J=22, K;
	C=obj1.Add(A,B);
	cout<<"The sum of integer values: "<<C<<endl;
	K=obj2.Add(I,J);
	cout<<"The sum of long values: "<<K<<endl;
} 