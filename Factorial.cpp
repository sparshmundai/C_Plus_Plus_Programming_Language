#include<iostream>
using namespace std;
int main()
{
	int i,fact=1,num;
	cout<<"Enter the number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
	fact=fact*i;
	}
   cout<<"Factorial of "<<num<<"is :"<<fact;
   cout<<"\n";
}
