#include<stdio.h>
#include<conio.h>
void main()
{
 int no1,no2,max;
 clrscr();
 printf("enter the value of no1 and no2");
 scanf("%d%d",&no1,&no2);
 max=no1>no2?no1:no2;
 printf("Greatest Number=%d",max);
 getchar();
 }