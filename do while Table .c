#include<stdio.h>
#include<conio.h>
void main ()
{
int i=1,num,table;
printf("enter any number");
scanf("%d",&num);
clrscr ();
do
{
table=num*i;
printf("%d\n",table);
i++;
} while(i<=10);
getch();
}