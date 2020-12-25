#include<stdio.h>
#include<math.h>
#define COLMAX 10
#define ROWMAX 19
main()
{
int row, column,y;
row=1;
printf("        MULTIPLICATION         \n");
printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ __ _\n");
do
{
column=1;
do
{
y=row*column;
printf("%4d",y);
column=column+1;
}
while(column<=COLMAX);
printf("\n");
row=row+1;
}
while(row<=ROWMAX);
printf("_ _ _ _ _ __ _ _ _ _ _ _ _ _ _ _ _\n");
}
