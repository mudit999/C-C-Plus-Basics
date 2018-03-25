#include<stdio.h>
int main()
{
int i;
int data[5];
int average;
int total;
for(i=0;i<=4;i++)
{
scanf("%d",&data[i]);
}
total=data[0]+data[1]+data[2]+data[3]+data[4];
average=total/5;
printf("total %d average %d \n",total,average);
}
