#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter any year=");
 scanf("%d",&year);
 if(year%4==0||year%400==0||year%100==0)
 {
  printf("%d is leap year",year);
 }
 else
 {
  printf("%d is not leap year",year);
 }
 getch();
} 