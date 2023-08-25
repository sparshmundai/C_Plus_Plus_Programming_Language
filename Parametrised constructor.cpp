#include<iostream>
using namespace std;
class integer
{ 
int m,n;
public:
integer(int,int);
void display()
{ 
cout<<"m "<<m<<endl;
cout<<"n "<<n<<endl; 
}
};
integer :: integer(int x,int y)
{
m=x;
n=y;
}
int main()
{ 
integer i1(10,100);
integer i2=integer(33,55);
cout<<"object 1 "<<endl;
i1.display();
cout<<"object 2 "<<endl;
i2.display();
return 0;
}