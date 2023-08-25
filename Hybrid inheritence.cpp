#include<iostream>
using namespace std;
class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:
 	B()      
 	{
 	   cout<<"Enter the number for x "<<endl;
 	   cin>>x;
 	}
};
class C
{
 	public:
 	int y;
 	C()   
 	{
      cout<<"Enter the number for y "<<endl;
      cin>>y;
    }
};
class D : public B, public C   
{
 	public:
 	void sum()
 	{
 	    cout <<"Sum= " << x * y<<endl;
 	}
};
int main()
{
    D obj1;          
 	obj1.sum();
 	return 0;
}