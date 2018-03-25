#include<stdio.h>
void main()
{
int a;
printf("Enter marks");
scanf("%d",&a);
if(a<40)
printf("Fail");
else if((a>=40)&&(a<50))
printf("Third");
else if((a>=50)&&(a<60))
printf("Second");
else if((a>=60)&&(a<70))
printf("First");
else if((a>=70)&&(a<=80))
printf("M");
}
