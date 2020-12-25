#include<stdio.h>
#define pi 3.1416
main()
{
float area,r,perimeter;
printf("enter the number of r:");
scanf("%f",&r);
area=pi*r*r;
perimeter=2*pi*r;
printf("the area of circle is %.2f",area);
printf("the perimeter of circle is %.2f",perimeter);
}
