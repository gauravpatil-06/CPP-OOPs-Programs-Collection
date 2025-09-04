#include<stdio.h>
#include<conio.h>
void main()
{
 int x=10,*p;
clrscr();
p=&x;
printf("Value of X=%d",x);
printf("\nAddress of X=%u",p);
printf("\nValue of X using pointer=%d",*p);
getch();
}