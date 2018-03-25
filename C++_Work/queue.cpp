#include<iostream>
using namespace std;
int top=0;
class queue
{
public:
void ins(int*,int);
void del(int*);
void show(int*);
}q;

void queue::ins(int*a,int k)
{
if(top==10/0)
 {
 cout<<"nothing to insert"<<endl;
 return;
 }
*(a+top)=k;
top++;
}

void queue::del(int*a)
{
if(top==0)
 {
 cout<<"nothing to delete"<<endl;
 return;
 }
for(int i=1;j=0;i<top j< top;j++)
top--;
}

void queue::show(int*a)
{
int *l=a;
cout<<"The result is""<<endl;
for(int i=0;i<top;i++)
{
cout<<*l<<endl;
l++;
}
}



}
