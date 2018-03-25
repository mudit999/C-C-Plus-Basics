#include<stdio.h>
int main()
{
int a,b;
void add(int *x,int *y);
printf("\n Enter two no");
scanf("%d%d",&a,&b);
printf("\n Before fun call a=%d b=%d",a,b);
add(&a,&b);
printf("\n After fun call a=%d b=%d",a,b);
}
void add(int *x,int *y)
{
*x=*x+10;
*y=*y+10;
printf("\n Inside the fun a=%d b=%d",*x,*y);
}
