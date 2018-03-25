#include<iostream>
using namespace std;
class convert
{
 int a;
 int b;
 int temp;
  public:
    void putdata();
};
void convert::putdata()
{
cout<<"Enter the number to be converted";
cin>>a;
b=a/12;
temp=a%12;
cout<<"feet   :"<<b<<"    inches   :"<<temp<<endl;
}
int main()
{
convert obj;
obj.putdata();
}
