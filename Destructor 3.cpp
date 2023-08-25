#include<iostream>
using namespace std;
class demo
{
	int x,y;
	public:
	demo(int x1,int y1)
	{
	cout<<"Inside the constructor"<<endl;
	x=x1;
	y=y1;	
	}
	void display()
	{
		cout<<"X is "<<x<<endl;
		cout<<"Y is "<<y<<endl;
	}
	~demo()
	{
		cout<<"Inside destructor"<<endl;
	}
};
int main()
{
	demo d(10,30);
	d.display();	
}
