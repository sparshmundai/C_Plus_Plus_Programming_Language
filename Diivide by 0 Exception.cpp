#include<iostream>
using namespace std;
void divide(int x, int y, int z)
{
if((x-y) != 0)
{
int R = z/(x-y);
cout <<"Result = " << R << "\n";
}
else
{
throw (x-y);
}
}
int main()
{
try
{
divide(10,20,30);
divide(10,10,20);
}
catch(int i)
{
cout <<"\n Exception caught" ;
}
return 0;
}
