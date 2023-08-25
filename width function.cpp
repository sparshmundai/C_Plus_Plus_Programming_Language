#include <iostream>
using namespace std;     
int main ()
{
	int item[4]={1,2,3,4};
	int price[4]={10,100,200,300};
	int i ;
	cout.width(6);
	cout<<"Item";
	cout.width(6);
	cout<<"Price";
	cout<<endl;
	for(i=0;i<4;i++)
	{
		cout.width(6);
		cout<<item[i];
		cout.width(6);
		cout<<price[i];
		cout<<endl;
	}
}