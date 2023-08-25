#include<iostream>
using namespace std;
class Room
{
int length;
int width;
public:
void room()
{
length = 0;
width = 0;
}
Room(int value=8)
{
length = width = 8;
}
void display()
{
cout<<length<< ' '<<width;
}
};
int main()
{
Room objRoom;
objRoom.display();
}