#include <stdio.h>
#include <conio.h>
void main()
{
 int a,b,c,big;
 clrscr();
 printf("Enter any three value:");
 scanf("%d%d%d",&a,&b,&c);
 big=a>b?(a>c?a:c):(b>c?b:c);
 printf("Greatest number=%d",big);
 getch();
}