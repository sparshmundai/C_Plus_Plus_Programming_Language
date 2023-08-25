#include<iostream>
using namespace std;
int main()
{
int *x=new int;
int *y =new int;
int *sum= new int;
cout<<"Enter value for a and b:"<<"\n";
cin>>*x>>*y;
*sum=*x+*y;
cout<<"Sum of a and b is: "<<*sum;
delete x;
delete y;
return 0;
}