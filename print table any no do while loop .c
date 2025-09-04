#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,num;
 clrscr();
 printf("Enter any number:");
 scanf("%d",&num);
 do
 {
 printf("\n%d",(i*num));
 i++;
 }while(i<=10);
 getch();
}