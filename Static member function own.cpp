#include<iostream>
using namespace std;
class sample
{
	static int count;
	public:
	void show();
	static void showcount();
};
void sample :: show()
{
cout<<"Hello "<<endl;
count++;	
}
void sample :: showcount()
{
	cout<<"Count is "<<count<<endl;
}
int sample :: count;
int main()
{
	sample a,b,c;
	a.show();
	b.show();
	c.show();
	a.showcount();
	b.showcount();
	sample :: showcount();
}