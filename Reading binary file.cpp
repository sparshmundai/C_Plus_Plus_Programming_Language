#include<iostream>
#include<fstream>
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
ifstream fin("xyz.dat", ios::binary);
if(!fin)
{
cout<<"Error in opening file"<<endl;
exit(-1);
}
student stu;
while(!fin.eof())
{
fin.read((char*)&stu, sizeof stu);
stu.outdata();
}
fin.close();
}