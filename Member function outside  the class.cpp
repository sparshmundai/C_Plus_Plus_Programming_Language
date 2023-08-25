#include<iostream.h>
#include<stdio.h>
using namespace std;
class student
{
int rollno;
char name[20];
public:
void getdata();
void putdata();
};
void student ::getdata()
{
cout<<"enter the rollno=";
cin>>rollno;
cout<<"enter your name=";
cin>>name;
}
void student :: putdata()
{
cout<<"roll no="<<rollno<<endl;
cout<<"name= "<<name<<endl ;
};
int main()
{
student s;
s.getdata();
s.putdata();
}
