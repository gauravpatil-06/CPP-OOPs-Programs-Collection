#include<stdio.h>
#include<conio.h>
void main()
{
 int salary;
 clrscr();
 printf("Enter salary");
 scanf("%d",&salary);
 if(salary==5000)
 {
  printf("pion");
 }
 else if(salary==7000)
 {
  printf("care Take");
 }
 else if(salary==2000)
 {
  printf("cleark");
 }
 else if(salary==60000)
 {
  printf("HOD");
 }
 else
 {
  printf("Enter valid salary");
 }
 getch();
} 