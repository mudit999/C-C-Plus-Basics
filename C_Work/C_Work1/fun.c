#include<stdio.h>
int main()
{
int a,b;
printf("\n Enter two no:");
scanf("%d %d",&a,&b);
sum(a,b);
}
void sum(int x, int y)
{
int s;
s=x+y;
printf("\n The sum of two no is %d",s);
}

