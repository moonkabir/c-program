#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the three number:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("the largest number is %d",a);
else
printf("the largest number is %d",c);
}
else
{
if(b>c)
printf("the largest number is %d",b);
else
printf("the largest number is %d",c);
}
if(a<b)
{
if(a<c)
printf("\nthe lowest number is %d",a);
else
printf("\nthe lowest number is %d",c);
}
else
{
if(b<c)
printf("\nthe lowest number is %d",b);
else
printf("\nthe lowest number is %d",c);
}
}
