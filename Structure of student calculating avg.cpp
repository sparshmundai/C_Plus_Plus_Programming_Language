#include<iostream>
using namespace std;

struct student
{
    int roll_no;
    int marks;
} s[10];

int main()
{
    int n, i, avg;
    int total = 0;
    cout << "Enter the number of student :\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the details of the students:" << i + 1 << " :-\n";
        cout << "Enter the rollno : \n";
        cin >> s[i].roll_no;
        cout << "Enter the marks : \n";
        cin >> s[i].marks;
        total += s[i].marks;
    }
    avg = total / i;
    cout <<"The average marks of students is : " <<avg ;
}