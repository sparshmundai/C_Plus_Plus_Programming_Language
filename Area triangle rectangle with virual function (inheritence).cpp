#include<iostream>
using namespace std;
class Area 
{
	public:
	virtual void sum();
};
class Triangle : public Area
{
	int h,b;
	float a;
	public:
	void sum()
	{
		cout<<"Enter the Height the Triangle"<<endl;
		cin>>h;
		cout<<"Enter the Breadth of the Triangle "<<endl;
		cin>>b;
		a=0.5*h*b;
		cout<<"Atea of Triangle "<<a<<endl;
	}
};
class Rectangle : public Area
{
	int l,b;
	public:
	void sum()
	{
	cout<<"Enter the Length of Rectangle"<<endl;
	cin>>l;
	cout<<"Enter the Breadth of Rectangle"<<endl;
	cin>>b;
	cout<<"Area of Rectangle: "<<l*b<<endl;
   }
};
int main()
{
	Triangle t;
	t.sum();
	Rectangle r;
	r.sum();
}
