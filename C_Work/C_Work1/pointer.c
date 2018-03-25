#include<stdio.h>
int main()
{
int a,b,s,*u,*v;
printf("\n Enter two no");
scanf("%d%d",&a,&b);
u=&a;
v=&b;
s=*u+*v;
printf("\n sum=%d",s);
printf("\n address of a %d",u);
printf("\n address of b %d",v);
printf("\n value of a %d",*u);
printf("\n value of b %d",*v);
}
