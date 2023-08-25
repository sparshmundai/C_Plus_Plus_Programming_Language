#include <iostream>
using namespace std; 
int main()
{
    int x,y,sum;
    float average;
    cout<< "Enter 2 integers : ";
    cin>>x>>y;
    sum=x+y;
    average=sum/2;
    cout<< "The sum of "<<x<<" and "<<y<< " is " <<sum<< ".";
    cout<<"\n";
    cout<< "The average of "<<x<<" and "<<y<< " is " <<average<< ".";
}