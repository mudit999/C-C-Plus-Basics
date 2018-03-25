#include<stdio.h>
int fib(int n)
{
if(n==1)
return 0;
if(n==2)
return 1;
else 
return(fib(n-1)+fib(n-2));
}
void main()
{
int n,i;
printf("Enter the no. of fibonacci terms:");
scanf("%d",&n);
printf("The first %d fibonacci terms are...\n",n);
for(i=1;i<=n;i++)
printf("%d\t",fib(i));
}
