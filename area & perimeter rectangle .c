#include <stdio.h>
#include <conio.h>
void main()
{
 float length,breadth,area, perimeter;
 clrscr();
 printf("Enter length and breadth:");
 scanf("%f%f",&length,& breadth);
 area=length*breadth;
 perimeter=2*(length+breadth);
 printf("Area of rectangle=%f\n",area);
 printf("Perimeter of rectangle=%f",perimeter);
 getch();
}