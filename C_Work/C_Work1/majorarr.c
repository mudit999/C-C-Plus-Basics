#include<stdio.h>
int main()
{
int i,j;
int A[3][4];
for(i=0;i<=3;i++)
 for(j=0;j<=4;j++)
 {
  scanf("%d\n", &A[i][j]);
 }
for(j=0;j<=4;j++)
 for(i=0;i<=3;i++)
{
printf("%d\n",A[i][j]);
}
}

