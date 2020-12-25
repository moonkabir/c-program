#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,d,r1,r2;
printf("Enter the number a,b,c:");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/(2.0*a);
r1=(-b-sqrt(d))/(2.0*a);
printf("\n\nr1=%.2f\n\nr2=%.2f",r1,r2);
}
else printf("\n\nroot are imaginary");
}
