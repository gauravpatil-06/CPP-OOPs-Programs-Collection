#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,num,sum=0;
 clrscr();
 printf("enter any number");
 scanf("%d",&num);
 while(i<=num)
 {
   sum=sum+i;
  i++;
 }
 printf("%d",sum);
getch();
}