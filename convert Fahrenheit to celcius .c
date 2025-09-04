#include<stdio.h>
#include<conio.h>
void main()
{
 float c,f;
 clrscr();
 printf("\n Enter temperature in degree Fahrenheit");
 scanf("%f",&f);
 c=(f-32)/1.8;
 printf("Temperature in degree Celsius=%f",c);
 getchar();
}