#include<stdio.h>
int main()
{
FILE *a;
char ch;
a=fopen("monye.c","w");
printf("\n Enter your string and press enter to stop:\n");
while((ch=getchar())!='\n')
putc(ch,a);
fclose(a);
}
