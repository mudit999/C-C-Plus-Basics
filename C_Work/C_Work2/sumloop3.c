#include<stdio.h>
int main()
{
int a;
a=0;
while(a<=100)
{
if((a%2==0)&&(a%3==0)&&(a%5==0))
printf("%d",a);
a++;
}
}
