#include<iostream.h>
using namespace std;
class base 
{ 
protected: 
int a; 
public: 
void print() 
{ 
cout<<"The number for base class = "; 
cin>>a; 
} 
}; 
class child : public base 
{ 
int b; 
public: 
void data() 
{ 
cout<<"Enter the number for child class = "; 
cin>>b; 
} 
void sum() 
{ 
cout<<"The sum = "<<a+b<<endl; 
} 
}; 
int main() 
{ 
child m; 
m.data(); 
m.print(); 
m.sum(); 
}