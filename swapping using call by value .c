#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
     clrscr();
     int a,b;
     swap(a,b);
     getch();
}
void swap(int x, int y)
{
int c;
int a=10,b=9;
 printf("\n before swapping a=%d\t b=%d",a,b);
 c=a;
 a=b;
 b=c;
 printf("\n after swapping a=%d\t b=%d",a,b);
}
