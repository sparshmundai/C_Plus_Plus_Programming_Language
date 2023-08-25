#include<iostream.h>   
int count=0;  
class alpha  
{  
public:  
alpha()  
{  
count++;  
cout<<"No. of object created="<<count<<endl;  
}  
~alpha()  
{  
cout<<"No. of object destroyed="<<count<<endl;  
count--;  
}  
};  
int main()  
{  
cout<<"Enter main"<<endl;  
alpha A1,A2,A3,A4;  
{  
cout<<"Enter block 1"<<endl;  
alpha A5;  
}  
{  
cout<<"Enter block 2"<<endl;  
alpha A6;  
}  
cout<<"Re enter main"<<endl;  
} 
