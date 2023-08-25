#include<iostream>
#include<string.h>
using namespace std;
  
 class student
 {
 	string name;
 	int roll;
 	string book_name;
	 public:
	 friend string books_name(string name,string author_name);
 	   void setdata()
 	   {
   	 	cout<<"enter the name "<<endl;
		cin>>name;
		cout<<"enter the name of the student "<<name<<endl;
		cout<<"enter the roll"<<endl;
		cin>>roll;
		cout<<"enter the roll number of the student "<<roll<<endl;
	
		cout<<"enter the name of the book"<<book_name<<endl;	   	 	
   	  }
} ;
  
   
string books_name (string name1 , string authorname)
{
	cin>>name1;
	cout<<"the name of the book is :"<<name1<<endl;
	cin>>authorname;
	cout<<"the name of the author"<<authorname<<endl;;
	return name1,authorname;
}
  
int main()
{
    student st;
	st.setdata();
	return 0;
}