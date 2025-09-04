#include <stdio.h>
#include <conio.h>
void main()
{
    int *ptr,a[10],sum=0,i;
    clrscr();
    ptr=&a[10];
    printf("Enter array elements:");
    ptr=&a[0];
    for(i=0;i<=9;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
     sum=sum+*ptr;
     printf("\nSum of all elements stored in array=%d",sum);
    }
    getch();
}