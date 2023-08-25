#include<iostream>  
using namespace std;  
class Base_class  
{    
    public:     
    void display()  
    {  
        cout << " It is the first function" << endl;  
    }  
};   
class Base_class2  
{   
    public:    
    void display2()  
    {  
        cout << " It is the second function" << endl;  
    }  
};   
class child_class : public Base_class, public Base_class2  
{  
       
    public:  
    void display3()  
    {  
        cout << " It is the function of derived class" << endl;      
    }     
};  
int main ()  
{  
    child_class ch;  
    ch.display();   
    ch.display2();   
    ch.display3();   
}  