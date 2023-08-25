#include<iostream>
using namespace std;
class staticFunction
{
static int count;
public:
static void setCount()
{
count++;
}
static void displayCount()
{
cout<<count;
}
};
int staticFunction :: count=0;
int main()
{
staticFunction :: setCount();
staticFunction :: displayCount();

}