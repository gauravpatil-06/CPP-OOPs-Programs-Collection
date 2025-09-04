#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={10,20,30,40,50},*ptr,sum=0;
clrscr();
printf("sum of all elements\n");
ptr=&a[0]; 
for(int i=0;i<5;i++)
{
 sum=sum+*ptr;
 ptr++;
}
printf("sum=%d",sum);
getch();
}