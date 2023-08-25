#include<iostream.h>
#include<stdio.h>
class student
{
	int rollno;
	char name[20];
	public:
	void getdata()
{
	cout<<"Enter the rollno : ";
	cin>>rollno;
	cout<<"Enter the name : ";
	gets(name);
}
void putdata()
{
	cout<<"rollno:"<<rollno;
	cout<<"\name: ";
	puts(name);
}
};
int main()
{
	student s;
	s.getdata();
	s.putdata();
}
