#include<iostream.h>
using namespace std;
class integer
{
int m,n;
public:
integer(int,int);
void display()
{
 cout<<"m"<<m;
cout<<"n"<<n; 
}
};
integer::integer(int x,int y)
{
m=x;
n=y;
}
int main()
{ 
integer i1(10,100);
integer i2=integer(33,55);
cout<<"object 1 ";
i1.display();
cout<<"object 2 ";
i2.display();
return 0;
}
