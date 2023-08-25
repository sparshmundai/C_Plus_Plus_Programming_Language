#include <iostream>
using namespace std;
class Base
{
int x;
public:
virtual void fun()
{
cout<<"hello";
}
int getX() 
{
 return x; 
}
};
class Derived: public Base
{
int y;
public:
void fun() 
{ cout << "fun() called";
}
};
int main(void)
{
Base* ptr;
Derived d;
ptr = &d;
ptr->fun();
Base b;
ptr = &b;
ptr->fun();
return 0;
}