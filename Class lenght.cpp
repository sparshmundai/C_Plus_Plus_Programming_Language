#include<iostream>
using namespace std;
class Volume
{
   double l,b,h,volume;
   public:
   double getdata(void)
   {
   	cout<<"Enter the Height: "<<endl;
   	cin>>h;
   	cout<<"Enter the length: "<<endl;
   	cin>>l;
   	cout<<"Enter the breadth: "<<endl;
   	cin>>b;
   }
   double putdata(void)
   {
   volume = l*b*h;
   }
   double displaydata()
   {
   	cout<<"Volume :"<<volume;
   }
};

int main()
{
	Volume v;
	v.getdata();
	v.putdata();
	v.displaydata();
	
}
   
