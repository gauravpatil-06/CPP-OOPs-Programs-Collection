#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i, product=1;
clrscr();
for(i=0;i<=4;i++)
{
printf("Enter %d elements",i);
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
 product *=a[i];
}
printf("product=%d", product);
getch();
}