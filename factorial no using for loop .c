#include<stdio.h>
#include<conio.h>
void main()
{
 int fact=1,i,num;
 clrscr();
 printf("enter any number:");
 scanf("%d",&num);
 for(int i=1;i<=num;i++)
 {
  fact=fact*i;
 }
 printf("Factorial of number=%d",fact);
getch();
}