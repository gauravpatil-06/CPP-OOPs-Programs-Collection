#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e,total;
 float avg;
 clrscr();
 printf("Enter the Mark's of 5 subject=");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 total=a+b+c+d+e;
 avg=total/5;
 printf("Total=%d",total);
 printf("\nAverage=%f",avg);
 getch();
}