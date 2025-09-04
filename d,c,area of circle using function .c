#include<stdio.h>
#include<conio.h>
void diameter (float r)
{
 printf("diameter of circle=%f\n",(2*r));
}
 void circumference (float r)
{
 printf("circumference of circle=%f\n",(2*3.14*r));
}
void area(float r)
{
 printf("area of circle=%f\n",(3.14*r*r));
}
 void main()
{
 float r;
 clrscr();
printf("Enter any number");
scanf("%f",&r);
diameter(r);
circumference(r);
area(r);
getch();
}