#include<stdio.h>
int main()
{
int a,b;
int big,*m,*n;
printf("\n Enter two no");
scanf("%d %d",&a,&b);
m=&a;
n=&b;
if(*m>*n)
big=*m;
else
 big=*n;
printf("\n Biggest number is %d",big);
}
