#include<iostream>
using namespace std;
class Room
{
int width;
public:
void setvalue(int w)
{
width = w;
}
};
int main()
{
Room objRoom;
objRoom.setvalue(12);
}