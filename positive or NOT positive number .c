#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
 printf("Enter any numbers=");
 scanf("%d",&num);
 if(num>0)
 {
  printf("%d is positive number",num);
 }
 else
 {
  printf("%d is NOT positive number",num);
 }
 getch();
} 