#include<stdio.h>
int main()
{
int i,j,n[10];
for(i=0;i<=10;i++)
{
n[i]=i+100;
}
for(j=0;j<10;j++)
printf("Element[%d]=%d\n",j,n[j]);
}
