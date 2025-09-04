#include<stdio.h>
#include<conio.h>
void main ()
{
 float radius,area, circumference;
 clrscr();
 printf("Enter any radius");
 scanf("%f",&radius);
 area= 3.14*radius*radius;
 circumference=2*3.14*radius;
 printf("area of Circle=%f",area);
 printf("\ncircumference of Circle=%f", circumference);
 getchar();
}
 