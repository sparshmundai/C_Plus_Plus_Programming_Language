#include<iostream>
using namespace std;
class animal
{
int x ;
public:
int getdata()
{
cout<<"base class"<<x;
return 0;
}
};
class amphibian : public animal
{
int y;
public:
int getdatader()
{
cout<<"in derived class"<<y;
return 0;
}
};
int main()
{
amphibian a;
animal a1;
a.getdatader();
a.getdata();
cout<<"Hello World";
return 0;
}