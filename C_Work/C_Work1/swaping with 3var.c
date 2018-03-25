#include<stdio.h>
main()
{
int a,b,c;
printf("Enter two no");
scanf("%d %d ", &a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swaping %d %d",a,b);
}
