#include<stdio.h>
int main()
{
int a,b,c;
char sign;
printf("Enter two no");
scanf("%d %d",&a,&b);
printf("Enter sign");
scanf("%s",sign);
switch(sign)
case'+':
c=a+b;
break
case'-':
c=a-b;
break
case'*':
c=a*b;
break
case'/':
c=a/b;
break
case'%':
c=a%b;
break
}
