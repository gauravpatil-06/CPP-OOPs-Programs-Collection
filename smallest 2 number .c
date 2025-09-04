#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 printf("Enter any two numbers=");
 scanf("%d%d",&num1,&num2);
 if(num1<num2)
 {
  printf("%d is smallest number",num1);
 }
 else
 {
  printf("%d is smallest number",num2);
 }
 getch();
}