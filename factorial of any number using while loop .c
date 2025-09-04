#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,num,fact=1;
 clrscr();
 printf("enter any number:");
 scanf("%d",&num);
 while(i<=num)
 {
   fact=fact*i;
  i++;
 }
 printf("Factorial of number=%d",fact);
getch();
}