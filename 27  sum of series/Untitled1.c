#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("input the value of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum=%d",sum);
}
