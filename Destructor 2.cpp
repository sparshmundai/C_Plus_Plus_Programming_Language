#include<iostream>
using namespace std;
class integer 
{
	int x;
	int y;
	public :
	integer()
	{	
	}
	integer(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	~integer()
	{
        cout<<"\nExit";
		cout<<"\nExit";
	}
	void show ()
	{
		cout<<"x = "<<x;
		cout<<"y = "<<y;
	}
};
int main()
	{
       integer j(10,20);
       j.show()	;	
	}
	
	
