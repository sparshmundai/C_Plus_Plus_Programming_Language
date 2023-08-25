#include<iostream>
using namespace std;
class space
{ 
int x,y,z;
public:
void getdata(int a,int b,int c);
void display();
void friend operator-(space &m);
};
void space::getdata(int a, int b,int c)
{
x=a;
y=b;
z=c;
}
void space::display()
{ 
cout<<"x="<<x<<" ";
cout<<"y="<<y<<" ";
cout<<"z="<<z<<" "<<endl;
}
void operator-(space &m)
{
m.x=-m.x;
m.y=-m.y;
m.z=-m.z;
}
int main()
{
space s;
s.getdata(15,-19,45);
cout<<"s";
s.display();
-s;
cout<<"-s";
s.display();
}