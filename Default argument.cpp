#include<iostream>
using namespace std;
int sum(int x, int y, int z=0, int w=0)
{
    return (x + y + z + w);
}
int main()
{
    cout << sum(25, 45)<< endl;
    cout << sum(25, 45, 55)<< endl;
    cout << sum(25, 45, 55, 60)<< endl;
}