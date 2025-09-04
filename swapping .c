#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter the value a and b=");
 scanf("%d%d",&a,&b);
 printf("\n before swapping a=%d\t b=%d",a,b);
 c=a;
 a=b;
 b=c;
 printf("\n after swapping a=%d\t b=%d",a,b);
 getch();
}