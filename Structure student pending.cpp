#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int rollno;
    float marks;
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.rollno;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.rollno << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}