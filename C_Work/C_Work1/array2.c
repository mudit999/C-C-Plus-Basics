#include<stdio.h>
int main()
{
int i,j;
int A[3][3]={{2,3,4},
             {5,4,5},
             {4,6,3}};
printf("OUTPUT \nn\");
 for(i=1;i<=3;i++)
 for(j=1;j<=3;j++)
 printf("%d\n",A[i][j]);
}
