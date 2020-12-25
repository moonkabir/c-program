#include<stdio.h>
main()
{
float cel,far;
printf("Enter the tempareture in fahrenhiet:");
scanf("%f",&far);
printf("Enter the tempareture in celsius:");
scanf("%f",&cel);
cel=(far-32)/1.8;
far=(cel*1.8)+32;
printf("celsius tempareture=%f",cel);
printf("\nfahrenhiet tempareture=%f",far);
}
