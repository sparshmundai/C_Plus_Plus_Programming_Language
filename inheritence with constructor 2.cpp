#include<iostream>
using namespace std;
class alpha 
{
	int x;
	public:
	alpha(int x1)
	{
	x=x1;
	}
	void showx()
	{
		cout<<"X is ="<<x;
	}
	
};
class beta
{
int y ;
public:
beta(int y1)
{
	y=y1;
}	
void showy()
{
	cout<<"Y is ="<<y;
}
};
class gama : public alpha ,public beta
{
	int m;
	int n;
	public:
	gama(int a, int b, int c, int d) : alpha(a), beta(b)	
	{
		m=c;
		n=d;
	}
	void showmn()
	{
		cout<<"M is = "<<m;
		cout<<"N is = "<<n;
	}
};
int main()
{
	gama g(10,20,30,40);
	g.showx();
	g.showy();
	g.showmn();	
}

 
