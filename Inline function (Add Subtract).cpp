#include<iostream.h>
using namespace std;
inline float add(float x , float y)
{
return(x+y);
}
inline float sub(float p , float q )
{
return(p-q);
}
int main()
{
float a=12.34;
float b=3.6;
cout<<add(a,b)<<endl;
cout<<sub(a,b)<<endl;	
}