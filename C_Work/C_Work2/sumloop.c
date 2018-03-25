#include<stdio.h>
int main()
{
int a,s;
a=1,s=0;
while(a<=10)
{
s=a+s;
a++;
}
printf("%d",s);
}
