#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
    clrscr();
    printf("Enter side of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b||b==c)
    {
     printf("Triangle is equilateral triangle");
    }
    else if(a==b||b==c||c==a)
    {
     printf("Triangle is Isosceles triangle");
    }
    else if((a*a==(b*b+c*c))||(b*b==(a*a+c*c))||(c*c==(a*a+c*c)))
    {
     printf("Triangle is Right angled triangle");
    }
    else
    {
     printf("Triangle is scalene triangle");
    }
    getch();
}