#include<iostream.h>
using namespace std;
class person
{ 
public:
int age;
person(int a)
{ 
age = a;
}
person(person & x)
{ 
age=x.age;
}
};
int main()
{
person timmy(10);
person sally(15);
person timmy_clone = timmy;
cout << timmy.age << " " <<
sally.age << " " <<
timmy_clone.age << endl;
timmy.age = 23;
cout << timmy.age << " " <<
sally.age << " " <<
timmy_clone.age << endl;
}