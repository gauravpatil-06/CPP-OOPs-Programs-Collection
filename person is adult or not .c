#include<stdio.h>
#include<conio.h>
void main()
{
 int age;
 clrscr();
 printf("Enter your age=");
 scanf("%d",&age);
 if(age>=18)
 {
  printf("person is adult",age);
 }
 else
 {
  printf("person is child",age);
 }
 getch();
} 