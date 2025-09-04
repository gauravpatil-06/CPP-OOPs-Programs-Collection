#include <stdio.h>
#include <conio.h>
void main()
{
    int *p1,*p2,a,b;
    clrscr();
    printf("Enter any value:");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    printf("Addition=%d\n",(*p1+*p2));
    printf("subtraction=%d\n",(*p1-*p2));
    printf("multiplication=%d\n",(*p1**p2));
    printf("Division=%d",(*p1%*p2));
    getch();
}