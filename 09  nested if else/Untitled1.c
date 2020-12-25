#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("Enter the numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("%d is the large number\n",a);
else
printf("%d is the large number\n",c);
}
else
{
if(b>c)
printf("%d is the large number\n",b);
else
printf("%d is the large number\n",c);
}
}
