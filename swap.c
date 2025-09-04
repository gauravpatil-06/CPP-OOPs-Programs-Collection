#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    swap();
    getch();
}
   swap()
    {
     int x=10,y=20;
    printf("\n Before swapping x=%d\ty=%d",x,y);
    int a,b, c;
    c=a;
    a=b;
    b=c;
    printf("\n After swapping a=%d\tb=%d",a,b);
}