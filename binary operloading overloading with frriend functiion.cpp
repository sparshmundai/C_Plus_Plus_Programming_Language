#include<iostream>
using namespace std;
class complex
{
float x;
float y;
public:
complex (){} 
complex (float real, float img) 
{
x=real;
y= img;
}
friend complex operator+(complex,complex);
void display();
};
complex operator+(complex a, complex b)
{
complex temp;
temp.x = a.x + b.x;
temp.y = a.y + b.y;
return (temp);
}
void complex :: display()
{
cout << x <<" + j " << y << "\n";
}
int main ()
{
complex C1, C2, C3;
C1 = complex(2.5, 3.5);
C2 = complex(1.6, 2.7);
C3 = operator+(C1,C2);
cout << "C1 = "; C1.display();
cout << "C2 = "; C2.display();
cout << "C3 = "; C3.display();
return 0;
}