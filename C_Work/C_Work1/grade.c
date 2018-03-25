#include<stdio.h>
int main()
{
int a;
char grade;
printf("Enter marks");
scanf("%d",&a);
if(a>=75)
grade='A';
 else
 if(a>=65)
 grade='B';
else
   if(a>=55)
   grade='C';
else
     if(a>=45)
     grade='D';
else
       if(a>=35)
       grade='E';
       else
       grade='F';
printf("\n Grade=%c",grade);
}
