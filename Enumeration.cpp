#include<iostream>
using namespace std;
int main()
{
enum Fruits{apple,orange,guava,pinapple};
Fruits myfruits;
int i;
cout<<"Enter your choice:";
cin>>i;
switch(i)
{
case apple:
cout<<"Your first fruit is Apple.";
break;
case orange:
cout<<"Your second fruit is Orange.";
break;
case guava:
cout<<"Your third fruit is Guava.";
break;
case pinapple:
cout<<"Your forth fruit is Pinapple.";
break;
}
return 0;
}