#include<iostream.h> 
#include<conio.h> 
class fixed_deposit 
{ 
long int p_amt; 
int year; 
float rate,r_value; 
public: 
fixed_deposit(){} 
fixed_deposit(long int p,int y,float r=0.12); 
fixed_deposit(long int p,int y,int r); 
void display(void); 
}; 
fixed_deposit::fixed_deposit(long int p,int y,float r) 
{ 
p_amt=p; 
year=y; 
rate=r; 
r_value=p_amt; 
for(int i=1;i<=y;i++) 
r_value=r_value*(1.0+r); 
} 
fixed_deposit::fixed_deposit(long int p,int y,int r) 
{ 
p_amt=p; 
year=y; 
rate=r; 
r_value=p_amt; 
for(int i=1;i<=y;i++) 
r_value=r_value*(1.0+float(r)/100); 
} 
void fixed_deposit::display() 
{ 
cout<<" Principle amount = "<<p_amt<<endl; 
cout<<"Return value = "<<r_value<<endl; 
}
int main() 
{ 
fixed_deposit fd1,fd2,fd3; 
long int p; 
int y,R; 
float r;  
cout<<" Enter the amount,period & interest rate(in%):"<<endl; 
cin>>p>>y>>R; 
fd1=fixed_deposit(p,y,R); 
cout<<" Enter the amount,period & Interest rate(in decimal form)"<<endl; 
cin>>p>>y>>r; 
fd2=fixed_deposit(p,y,r); 
cout<<" Enter the amount,period"<<endl; 
cin>>p>>y; 
fd3=fixed_deposit(p,y); 
cout<<" RESULT:"; 
cout<<" Deposit1: "; 
fd1.display(); 
cout<<" Deposit2:"; 
fd2.display(); 
cout<<" Deposit3: "; 
fd3.display(); 
}