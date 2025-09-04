#include<stdio.h>
#include<conio.h>
void main ()
{
 int length, breadth,area;
 clrscr();
 printf("Enter any 2 Number=");
 scanf("%d%d",& length,& breadth);
 area =0.5*length*breadth;
 printf("area of triangle=%d",area);
 getch();
}