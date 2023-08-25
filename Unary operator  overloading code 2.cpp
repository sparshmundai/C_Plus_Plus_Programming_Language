#include<iostream>
using namespace std;
class space 
{
	int x,y,z;
	public :
	space (int x1,int y1, int z1)
	{
		x=x1;
		y=y1;
		z=z1;
	}
	void operator -()
	{
	x=-x;
	y=-y;
	z=-z;
	}
	void show ()
	{
		cout<<"\nx is ="<<x;
		cout<<"\ny is ="<<y;
		cout<<"\nz is ="<<z;
	}
};
int main()
{
	space s(10,20,-30);
	s.show();
	cout<<"\nAfter applying new defination";
	-s;
	s.show();	
} 

 	
