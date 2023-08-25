#include <iostream>
using namespace std;
int main()
{
    int a=10; 
    int &b = a; 
    cout << endl << "Value of a: " << a;
    cout << endl << "Value of b: " << b << endl;
    return 0;
}