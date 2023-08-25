#include<iostream>
#include<fstream.h>
#include<process.h>
using namespace std;
class student
{
private:
int rollno;
float total;
public:
void indata()
{ 
cin>>rollno>>total;
}
void outdata()
{
cout<<rollno<<total;
}
};
int main()
{
ofstream fout("xyz.dat", ios::binary| ios::app);
student stu;
int n, i=0;
cout<<"Enter no. of records you want to add to a file"<<endl;
cin>>n;
while(i<n)
{stu.indata();
fout.write((char*)&stu, sizeof stu);
i++;
}
fout.close();
}
