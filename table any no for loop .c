#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,T,num;
 printf("Enter any number:");
 scanf("%d",&num);
 for(i=1;i<=10;i++)
  {
   T=i*num;
   printf("\n%d",T);
  }
 getch();
}