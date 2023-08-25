#include<iostream.h>
#include<conio.h>
using namespace std;
class account
{
int A_id;
char name[20];
int balance;
public:
void entry()
{
cout<<"Enter account id ";
cin>>A_id;
cout<<"Enter name ";
cin>>name;
cout<<"Enter balance ";
cin>>balance;
}
void show()
{
cout<<"\naccount id is : "<<A_id<<endl;
cout<<"\nName : "<<name<<endl;
cout<<"\nbalance : "<<balance;
}
void deposit()
{
int amt;
cout<<"Enter amount to deposit ";
cin>>amt;
balance=balance+amt;
}
void withdra()
{
int amt;
cout<<"Enter amount to withdraw ";
cin>>amt;
if(amt<=balance)
balance=balance-amt;
else
cout<<"not possible"<<endl;
}
int find(int);
};

int account::find(int a)
{
if(A_id==a)
{
show();
return(1);
}
return(0);
}
int main()
{
account bk[3];
int ch=0,a,c,i;
for(i=0;i<=2;i++)
{
bk[i].entry();
}
 do
 {
 cout<<"\n\n1: Enter to display all records\n";
 cout<<"\n\n2: Enter account number to know records \n";
 cout<<"\n\n3: Enter to deposit Amount\n";
 cout<<"\n\n4: Enter to Withraw Amount\n";
 cout<<"\n\n5: Exit\n";
 cout<<"enter your choice";
 cin>>c;
 switch(c)
 {
 case 1:
 for(i=0;i<=2;i++)
 {
 bk[i].show();
 }
 break;
 case 2:
 cout<<"Account number";
 cin>>a;
 for(i=0;i<=2;i++)
 {
 ch=bk[i].find(a);
 if(ch)
 break;
 }
 if(!ch)
 cout<<"Record not found"<<endl;
 break;
 case 3:
 cout<<"Enter Account number in which u want to deposit";
 cin>>a;
 for(i=0;i<=2;i++)
 {
 ch=bk[i].find(a);
 if(ch)
 bk[i].deposit();
 break;
 }
 if(! ch)
 cout<<"not found"<<endl;
 break;
 case 4:
 cout<<"Enter Account number from which u want to withdraw "<<endl;
cin>>a;
for(i=0;i<=2;i++)
{
ch=bk[i].find(a);
if(ch)
{
bk[i].withdra();
break;
}
}
if(! ch)
cout<<"record not found"<<endl;
break;
case 5:
cout<<"Not found"<<endl;
break;
default:
cout<<"choice correct option"<<endl;
}
}while(c !=5);
return 0;
}
