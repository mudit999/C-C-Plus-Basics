#include<iostream>
using namespace std;
class dist
{
 private: int inches,feet,temp;
 public: void io();void calc();
};
void dist::io()
{
cout<<"Enter distance in inches: ";
cin>>inches;
calc();
cout<<feet<<"feet "<<temp<<"inches "<<endl;
}
void dist::calc()
{
feet=inches/12;
temp=inches%12;
}
int main()
{
dist  d;
d.io();
return 0;
}
