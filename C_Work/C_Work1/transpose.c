#include<stdio.h>
int main()
{
int a[3][3], t[3][3],m,n,i,j;
printf("\n Enter order of matrix:");
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
 printf("Enter the elements of %d rows: ",i+1);
 for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 t[i][j]=a[i][j];
printf("\n The transpose matrix is \n");
 for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d",t[i][j]);
printf("\n");
}
}
