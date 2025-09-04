#include <stdio.h>
#include <conio.h>
void add(int x, int y)
{
    printf("\nAddition=%d",(x+y));
}
void sub(int x, int y)
{
    printf("\nsubtraction=%d",(x-y));
}
void mul(int x, int y)
{
    printf("\nMultipication=%d",(x*y));
}
void div(int x, int y)
{
    printf("\nDivision=%d",(x/y));
}
void main()
{
 int x,y;
 clrscr();
 printf("Enter any two numbers:");
 scanf("%d%d",&x,&y);
 add(x,y);
 sub(x,y);
 mul(x,y);
 div(x,y);
    getch();
}
