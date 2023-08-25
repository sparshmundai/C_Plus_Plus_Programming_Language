#include <iostream>
using namespace std;
class Parent
{
int x;
public:
Parent(int a)
{
x=a;
cout<<"Inside base class"<<endl;
cout<<a<<endl;
}
~Parent()
{
cout<<"parent destructor"<<endl;
}
};
class Child : public Parent
{
int y;
public:
Child(int a,int b):Parent(a)
{
y=b;
cout <<"Inside sub class"<< endl;
cout<<y<<endl;
}
~Child()
{
cout<<"child destructor"<<endl;
}
};
int main() 
{
Child obj(2,3);
return 0;
}