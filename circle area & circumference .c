#include <stdio.h>
#include <conio.h>
void main()
{
 float radius,pi=3.14,area, circumference;
 clrscr();
 printf("Enter radius:");
 scanf("%f",& radius);
 area=pi*radius*radius;
 circumference=2*pi*radius;
 printf("Area of circle=%f\n",area);
 printf("circumference of circle =%f", circumference);
 getch();
}