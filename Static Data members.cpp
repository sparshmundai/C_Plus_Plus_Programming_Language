#include<iostream>
using namespace std;
class sample
{
static int count;
public :
void show();
void showcount();
};
void sample :: show()
{
	cout<<"Hello";
	count++;
}
void sample :: showcount()
{
	cout<<"Count ="<<count;
}
int main()
{
	sample a,b,c;
	a.show();
	b.show();
	c.showcount();
}