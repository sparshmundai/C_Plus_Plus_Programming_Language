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
int retroll()
{ 
return rollno;
}
};
int main()
{
ifstream fin("xyz.dat", ios::binary);
ofstream fout("def.dat", ios::binary);
if(!fin)
{
cout<<"Error in opening file"<<endl;
exit(-1);
}
student stu;
int roll;
cout<<"Enter roll no. of student whose record you want to delete"<<endl;
cin>>roll;
while(!fin.eof())
{
fin.read((char*)&stu, sizeof stu);
if (stu.retroll() != roll)
{
fout.write((char*)&stu, sizeof stu);
}
}
fin.close();
fout.close();
remove("xyz.dat");
rename("def.dat", "xyz.dat");
}