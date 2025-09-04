#include<stdio.h>
#include<conio.h>
void main()
{
 int m1,m2,m3,m4,m5,total;
 float avg;
 clrscr() ;
 printf("Enter any marks of 5 subject=");
 scanf("%d%d%d%d%d",m1,m2,m3,m4,m5);
 total=m1+m2+m3+m4+m5;
 printf("total=%f",total);
 avg=total/5;
 printf("total=%d",total);
 printf("\nAverage=%f",avg);
 getch();
}  