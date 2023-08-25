#include<iostream.h>
#include<conio.h>
class employee
{
char name[30]; 
float age;
public:
void getdata(void);
void putdata(void);
};
void employee :: getdata(void)
{
cout<<"Enter name: ";
cin>>name;
cout<<"Enter age ";
cin>>age;
}
void employee :: putdata(void)
{
cout<<"Name:"<<name<<"\n";
cout<<"Age:"<<age<<"\n";
}
const int  size=3;
int main()
{
employee manage[size];
for(int i=0; i<size; i++)
{
cout<<"\nOetails of manager"<< i+1 <<"\n";
manage[i].getdata();
}
cout<<"\n";
for(int i=0;i<size;i++)
{
cout <<"\nManager"<<i+1<<"\n";
manage[i].putdata();
}
getch();
}