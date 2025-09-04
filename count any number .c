#include<stdio.h>
#include<conio.h>
void main()
{
int num, count=0, d;
clrscr();
printf("enter any number");
scanf("%d",&num);
while(num!=0)
{
d=num%10;
count++;
num=num/10;
}
printf("Number of digit=%d",count);
getch ();
}
    