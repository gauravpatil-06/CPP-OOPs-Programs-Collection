#include<stdio.h>
#include<conio.h>
void main()
{
int num, reverse=0, d;
clrscr();
printf("enter any number");
scanf("%d",&num);
while(num!=0)
{
d=num%10;
reverse=reverse*10+d;
num=num/10;
}
printf("reverse number=%d",reverse);
getch ();
}
    