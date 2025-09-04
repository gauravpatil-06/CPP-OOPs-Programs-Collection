#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
     clrscr();
     add(5,4);
     getch();
}
void add(int x, int y)
{
    int c=x+y;
    printf("Addition=%d",c);
}
