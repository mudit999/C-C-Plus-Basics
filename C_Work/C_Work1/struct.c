#include<stdio.h>
int main()
{
struct student
{
int roll;
char name[15];
int age;
}s;
printf("\n Enter roll no");
scanf("%d",&s.roll);
printf("\n Enter name");
scanf("%s",s.name);
printf("\n Enter age");
scanf("%d",s.age);
}
