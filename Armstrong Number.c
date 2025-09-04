#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,d,ori;
clrscr();
printf("enter any number:");
scanf("%d",&num);
ori=num;
while(num!=0)
{
d=num%10;
sum=sum+d*d*d;
num=num/10;
}
if(ori==sum)
{
printf("%d is Armstrong Number",ori);
}
else
{
printf("%d is Not Armstrong Numbe",ori);
}
getch ();
}
    