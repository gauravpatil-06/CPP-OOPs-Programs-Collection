#include<stdio.h>
#include<conio.h>
void main()
{
 int a,*ptr;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
ptr=&a;
printf("Value of a=%d",a);
printf("\nAddress of a=%u",ptr);
printf("\nValue of a using pointer=%d",*ptr);
getch();
}