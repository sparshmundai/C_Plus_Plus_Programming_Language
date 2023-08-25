#include<iostream.h>
#include<conio.h>
using namespace std;
class Room
{
int width;
int height;
static int copyConsCount;
public:
Room()
{
width = 12;
height = 8;
}
Room(Room& r)
{
width = r.width;
height = r.height;
copyConsCount++;
}
void disCopyConsCount()
{
cout<<copyConsCount;
}
};
int Room::copyConsCount=0;
int main()
{
Room objRoom1;
Room objRoom2(objRoom1);
Room objRoom3=objRoom1;
Room objRoom4;
objRoom4=objRoom3;
objRoom4.disCopyConsCount();
}