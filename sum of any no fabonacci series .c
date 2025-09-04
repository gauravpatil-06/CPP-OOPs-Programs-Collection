#include<stdio.h>
#include<conio.h>
void main()
{
int num, sum=0, d;
clrscr();
printf("enter any number");
scanf("%d",&num);
while(num!=0)
{
d=num%10;
sum=sum+d;
num=num/10;
}
printf("sum of digit=%d",sum);
getch ();
}
