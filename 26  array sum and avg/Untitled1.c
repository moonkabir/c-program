#include<stdio.h>
int main()
{
int i,n,a[20],sum=0;
float avg;
printf("enter the number of n:");
scanf("%d",&n);
printf("Input %d number:\n",n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
printf("a[%d]=%d\n",i,a[i]);
sum=sum+a[i];
avg=sum/n;
}
printf("__________________________________\n");

printf("total=%d\n",sum);
printf("average=%.2f",avg);

}
