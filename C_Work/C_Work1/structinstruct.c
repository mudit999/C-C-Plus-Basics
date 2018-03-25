#include<stdio.h>
int main()
{
struct emp
 {
 int id,bs;
 struct date
  {
  int day;
  int month;
  int year;
  }y;
}x;
printf("Enter Employee ID, Basic Salary, day,month,year");
scanf("%d%d%d%d%d",&x.id,&x.bs,&x.y.day,&x.y.month,&x.y.year);
}
