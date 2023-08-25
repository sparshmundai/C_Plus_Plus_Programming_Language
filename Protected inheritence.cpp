#include<iostream.h> 
using namespace std;
class base 
{ 
public: 
int a; 
}; 
class child :  protected base 
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
void product() 
{ 
cout<<"The product = "<<a*b<<endl; 
} 
}; 
int main() 
{ 
child m; 
m.data();  
m.product(); 
}