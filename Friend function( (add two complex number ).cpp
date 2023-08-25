#include<iostream>
using namespace std;
class Complex
{
float real, imag; 

public:

void getdata( );
void putdata( );

friend Complex sum(Complex A, Complex B);
};

void Complex :: getdata( )
{
cout<<"enter real part:";
cin>>real;
cout<<"enter imaginary part:";
cin>>imag;
}

void Complex :: putdata()

{
if (imag>=0) 
cout<<real<<"+"<<imag<<"i";              
else
cout<<real<<imag<<"i";
}

Complex sum (Complex A, Complex B)
{
Complex temp;
temp.real=A.real + B.real;
temp.imag= A.imag + B.imag;
return temp;
}

int main ()
{
Complex X, Y, Z;
X.getdata();
Y. getdata();
Z= sum (X,Y);
Z.putdata();
}