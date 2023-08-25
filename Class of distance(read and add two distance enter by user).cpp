#include<math.h>
#include<iostream>
using namespace std;
class Distance
{
float feet,inch;
public: 
Distance()
{
feet=0.0;
inch=0.0;
}
void read_dist();
void disp_dist();
void add(Distance , Distance);
};
void Distance::read_dist()
{
cout<<"Enter distance(feet and inches):";

cin>>feet>>inch;
}
void Distance::disp_dist()
{
cout<<"Distance Feet:"<<feet<<", Inches:"<<inch<<endl;
}
void Distance::add(Distance x,Distance y)
{
inch=x.inch+y.inch;
}
int main()
{
Distance d1,d2,d3;
cout<<"Enter first measure:\n";
d1.read_dist();
cout<<"Enter second measure:\n";
d2.read_dist();
d3.add(d1,d2);
d3.disp_dist();
}