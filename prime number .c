#include<stdio.h>
#include<conio.h>
void main ()
{
 int flag=0,num,i=2;
 clrscr ();
 printf("Enter any numbers");
 scanf("%d",&num);
 while(i<=num/2)
 {
  if(num%i==0)
  {
   flag=1;
   break;
  }
  i++;
 }
 if(flag==0)    
 {
  printf("%d is prime number",num);
 }
 else
 {
  printf("%d is not prime number",num);
 }
  getch();
}