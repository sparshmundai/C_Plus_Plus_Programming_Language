#include<iostream.h>
class Complex
{
float real, imag;
public:
void getdata( );
void putdata( );
Complex sum (Complex B);
};
void Complex ::getdata()
{
cout<<"Enter real part: ";
cin>>real;
cout<<"Enter imaginary part: ";
cin>>imag;
}
void Complex :: putdata()
{
if (imag>=0)
cout<<real<<"+"<<imag<<"i";
else
cout<<real<<imag<<"i";
}
Complex Complex :: sum (Complex B)
{
Complex temp;
temp.real=real + B.real;
temp.imag= imag + B.imag;
return temp;
}
int main ()
{
Complex X, Y, Z;
X.getdata();
Y.getdata();
Z=X.sum (Y);
Z.putdata();
}