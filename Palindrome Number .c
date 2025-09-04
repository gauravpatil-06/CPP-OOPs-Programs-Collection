#include<stdio.h>
#include<conio.h>
void main()
{
int num, rev=0,d,ori;
clrscr();
printf("enter any number");
scanf("%d",&num);
ori=num;
while(num!=0)
{
d=num%10;
rev=rev*10+d;
num=num/10;
}
if(ori==rev)
{
printf("%d is Palindrome Number",ori);
}
else
{
printf("%d is Not Palindrome Numbe",ori);
}
getch ();
}
    