#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,choice;
float c;
clrscr();
printf("Enter any two numbers");
scanf("%d%d",&a,&b);
printf("Enter related code\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n r. Division\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
 c=a+b;
 printf("Addition=%f",c);
break;
case 2:
 c=a-b;
 printf("Subtraction=%f",c);
 break;
case 3:
 c=a*b;
 printf("Multiplication=%f",c);
 break;
case 4:
 c=a/b;
 printf("Division=%f",c);
 break;
default:
 printf("\nEnter valied Entry");
}
getch();
}