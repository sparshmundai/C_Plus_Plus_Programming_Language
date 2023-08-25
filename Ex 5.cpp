#include<iostream>
using namespace std;
class Room
{
int width;
float length;
public:
void setValue(int w,int l)
{
     width = w;
     length = l;
}
};
int main()
{
Room objRoom;
objRoom.setValue(12,1.4);
} 

