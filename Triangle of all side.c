#include <stdio.h>
#include <conio.h>
void main()
{
 int a, b, c;
 printf("\nEnter sides of triangle:");
 scanf("%d%d%d",&a,&b,&c);
 if(a == b && b == c)
 printf("\nThe Given Triangle is equilateral");
 else if(a == b || b == c || c == a)
 printf("\nThe given Triangle is isosceles");
 else if((a*a==(b*b+c*c))||(b*b==(a*a+c*c))||(c*c==(a*a+c*c)))
 printf("\nThe given Triangle is Right Angled Triangle");
 else
 printf("The given Triangle is scalene");
 getch();
}