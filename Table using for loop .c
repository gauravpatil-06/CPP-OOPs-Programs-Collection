#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,num;
 printf("Enter any number:");
 scanf("%d",&num);
 for(i=1;i<=10;i++)
  {
   printf("\n%d",num*i);
  }
 getch();
}