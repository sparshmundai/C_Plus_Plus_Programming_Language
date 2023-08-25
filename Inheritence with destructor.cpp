#include <iostream>
using namespace std;
// base class
class Parent
{
int x;
public:
//int x;
// base class constructor
Parent(int a)
{
x=a;
cout<<"Inside base class"<< endl;
cout<<a<<endl;
}
~Parent()
{
cout<<"Parent destructor"<<endl;
}
};
// sub class
class Child : public Parent
{
int y;
public:
//sub class constructor
Child(int a,int b):Parent(a)
{
y=b;
cout<<"Inside sub class" << endl;
cout<<y;
}
~Child()
{
cout<<" Child destructor"<<endl;
}
};
// main function
int main() {
// creating object of sub class
Child obj(2,3);
return 0;
}