#include<stdio.h>
#include<conio.h>
void main ()
{
 float fah, celcius;
 clrscr ();
 printf("Enter Fahrenheit");
 scanf("%f",&fah);
 celcius=(fah-32)*5/9;
 printf("celcius=%f", celcius);
  getch();
}