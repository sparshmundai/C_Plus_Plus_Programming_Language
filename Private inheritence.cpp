#include<iostream.h> 
using namespace std;
class base 
{ 
public: 
int a; 
}; 
class child : private base 
{ 
int b; 
public: 
void data() 
{ 
cout<<"Enter the number for child class = "; 
cin>>b; 
cout<<"Enter the number for base class = "; 
cin>>a; 
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
m.sum(); 
}