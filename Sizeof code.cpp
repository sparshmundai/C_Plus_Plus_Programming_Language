#include <iostream>
using namespace std;
int main() 
{ 
 int y;
 int x = 11;
 y = sizeof(x++); 
 cout<<y<<" "<<x;
}