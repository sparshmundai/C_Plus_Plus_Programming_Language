#include<iostream>
using namespace std;
void test(int x) throw (int, double)
{
if (x == 0) throw 'x';
else
if(x == 1) throw x;
else
if(x == -1) throw 1.0;
cout<<"End of function block"<<endl;
}
int main()
{
try
{
cout<<"Testing throw restrictions"<<endl;
cout<<"x==0";
test(0);
cout<<"x==1";
test(1);
cout<<"x== -1";
test(-1);
cout<<"x== 2";
test(2);
}
catch(char c)
{
cout<<"Caught a character"<<endl;
}
catch(int m)
{
cout<<"Caught a integer"<<endl;
}
catch(double d)
{
cout<<"Caught a double"<<endl;
}
cout<<"End of try catch block"<<endl;
return 0;
}